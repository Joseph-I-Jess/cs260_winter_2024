#include <cstdio>
#include <iostream>

#include "cpp_basics.hpp"

using std::cout;
using std::endl;

/* Main function */
int main() {

    // structs
    struct node my_node_1{1, 21, nullptr};
    cout << "my_node_1.id: " << my_node_1.id << endl;
    cout << "my_node_1.value: " << my_node_1.value << endl;
    cout << "my_node_1.next: " << my_node_1.next << endl;

    // a second node
    struct node my_node_2{2, 42, nullptr};
    cout << "my_node_2.id: " << my_node_2.id << endl;
    cout << "my_node_2.value: " << my_node_2.value << endl;
    cout << "my_node_2.next: " << my_node_2.next << endl;

    my_node_1.next = &my_node_2;
    cout << "my_node_1.id: " << my_node_1.id << endl;
    cout << "my_node_1.value: " << my_node_1.value << endl;
    cout << "my_node_1.next: " << my_node_1.next << endl;
    cout << "&my_node_2: " << &my_node_2 << endl;

    cout << "my_node_2.id: " << my_node_2.id << endl;
    cout << "my_node_2.value: " << my_node_2.value << endl;
    cout << "my_node_2.next: " << my_node_2.next << endl;

    cout << endl << "(*my_node_1.next).id: " << (*my_node_1.next).id << endl; // dereference with * and then look up its id
    cout << "my_node_1.next->id: " << my_node_1.next->id << endl; // arrow notation
    cout << "my_node_1.next->value: " << my_node_1.next->value << endl;
    cout << "my_node_1.next->next: " << my_node_1.next->next << endl;

    // a third node
    node my_node_3{3, 9999, nullptr};
    my_node_2.next = &my_node_3;

    node my_node_4{4, 40, nullptr};
    my_node_3.next = &my_node_4;

    node *current_node = &my_node_4;
    for(int i = 5; i < 11; ++i) {
        node *new_node = new node{i, 10 * i, nullptr};
        current_node->next = new_node;
        current_node = current_node->next;
    }

    cout << endl << "loop walking along the \"next\" links of our linked structure:" << endl;

    current_node = &my_node_1; // reset value to expected starting point
    while(current_node != nullptr) {
        cout << "current_node->id: " << current_node->id << endl;
        current_node = current_node->next;
    }

    // Write a loop to delete all the node objects that were dynamically created (with the new keyword)!
    current_node = my_node_4.next; // reset value to expected starting point (the first dynamically created node)
    while(current_node != nullptr) {
        node *node_to_delete = current_node;
        cout << "deleting node with id: " << node_to_delete->id << endl;
        current_node = current_node->next;
        delete_node(node_to_delete);
        // delete node_to_delete;
    }

    current_node = &my_node_1; // reset value to expected starting point
    while(current_node != nullptr) {
        cout << "current_node->id (after delete): " << current_node->id << endl;
        current_node = current_node->next;
    }

    // classes


    // more advancved pointers?

    return 0;
}
