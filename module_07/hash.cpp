// hash.cpp

#include <sstream>

#include "hash.hpp"

using std::stringstream;

HashTable::HashTable(int initialCapacity) {
    capacity = initialCapacity;
    size = 0;
    collisionCount = 0; // Initialize collision count

    storage = new string[capacity];
}

int HashTable::hash(string value) {
    int result = 0;
    for (char c : value) {
        result += (int)c;
    }

    result %= capacity;

    return result;
}

int HashTable::add(string value) {
    bool collision = false;
    // hash key
    int bucket = hash(value);
    // check if there is a collision
    if (storage[bucket] != value && storage[bucket] != "") {
        collision = true;
    }
    // place in bucket
    storage[bucket] = value;

    // check for resize!

    if (collision == true) {
        // this is a hack!
        bucket *= -1;
        ++collisionCount; // Increment collision count
    } else {
        ++size;
    }
    return bucket;
}

bool HashTable::remove(string value) {
    bool isThere = search(value);
    int bucket = hash(value);
    if (isThere == true) {
        storage[bucket] = "";
        --size;
    }

    return isThere;
}

bool HashTable::search(string value) {
    bool result = false;
    // hash
    int bucket = hash(value);
    // check if value there is the same as our value
    if (storage[bucket] == value) {
        result = true;
    }

    return result;
}

bool HashTable::resize() {
    // Implementation of resize function
    // ...

    return true;
}

string HashTable::toString() {
    stringstream result;
    for (int i = 0; i < capacity; ++i) {
        result << storage[i] << ", ";
    }

    return result.str();
}

int HashTable::getSize() {
    return size;
}

int HashTable::getCollisionCount() {
    return collisionCount;
}
