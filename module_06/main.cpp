#include <iostream>

#include "binary_node.h" // might consider doing test
#include "binary_search_tree.h"

using std::cout;
using std::endl;

int main() {
    cout << "create bst" << endl;
    BinarySearchTree bst;

    // test empty tree
    cout << "test empty: bst.search(42): " << bst.search(42) << endl;

    // add and test add
    cout << "add 42" << endl;
    bst.add(42);

    //cout << "NULL == false: " << (NULL == false) << endl;

    cout << "test add first node: bst.search(42): " << bst.search(42) << endl;
    cout << "test value not in there: bst.search(12): " << bst.search(12) << endl;

    //test adding left
    cout << "add 20" << endl;
    bst.add(20);
    cout << "test add left: bst.search(20): " << bst.search(20) << endl;

    //test add right
    cout << "add 65" << endl;
    bst.add(65);
    cout << "test add right: bst.search(65): " << bst.search(65) << endl;

    //test add duplicate
    cout << "add duplicate 20" << endl;
    bst.add(20);
    cout << "test add duplicate: bst.search(20): " << bst.search(20) << endl;

    //test traversal
    cout << "test traversal:" << endl;
    bst.in_order_traversal();

    return 0;
}