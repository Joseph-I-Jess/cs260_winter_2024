// hash.hpp

#ifndef HASH_HPP
#define HASH_HPP

#include <string>

using std::string;

class HashTable {
public:
    HashTable(int initialCapacity);
    int hash(string key);
    int add(string key);
    bool remove(string key);
    bool search(string key);

    string toString();
    int getSize();
    int getCollisionCount(); // Added collision count accessor

private:
    int capacity = 10;
    int size = 0;
    int collisionCount = 0; // Added collision count variable

    string *storage = nullptr;
    bool resize();
};

#endif // HASH_HPP
