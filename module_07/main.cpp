#include <iostream>

#include "hash.hpp"

using std::cout;
using std::endl;

// Added collaboration with ChatGPT for resize and collision count behavior.

int main() {
    HashTable ht(10);
    cout << "Create table." << endl;
    cout << "table contents (empty table): " << ht.toString() << endl;
    cout << "size of empty table: " << ht.getSize() << endl;

    int result = ht.add("Joseph");
    cout << "Add Joseph (" << result << ")." << endl;
    cout << "table contents (one entry): " << ht.toString() << endl;
    cout << "size of table after 1 add: " << ht.getSize() << endl;
    cout << "collision count: " << ht.getCollisionCount() << endl; // Added collision count print

    result = ht.add("Josepi");
    cout << "Add Josepi (" << result << ")." << endl;
    cout << "table contents (non-collision second entry): " << ht.toString() << endl;
    cout << "size of table after 2 add (non-collision): " << ht.getSize() << endl;
    cout << "collision count: " << ht.getCollisionCount() << endl;

    result = ht.add("cats");
    cout << "Add cats (" << result << ")." << endl;
    cout << "table contents (collision third entry): " << ht.toString() << endl;
    cout << "size of table after 3 add (1 collision): " << ht.getSize() << endl;
    cout << "collision count: " << ht.getCollisionCount() << endl;

    // result = ht.remove("cats");
    // cout << "remove cats (success: " << result << ")." << endl;
    // cout << "table contents (remove cats): " << ht.toString() << endl;
    // cout << "size of table after 3 add and one remove (1 collision): " << ht.getSize() << endl;
    // cout << "collision count: " << ht.getCollisionCount() << endl;

    return 0;
}
