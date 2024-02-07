// Code modified from a conversation with ChatGPT

#include <iostream>
#include <sstream>
#include <string>

#include "autosort_list.h"
#include "node.h"

using std::cout;
using std::endl;
using std::string;

// define the list class
list::list() {
    head = nullptr;
}

// Insert into list in ascending order
void list::insert(int data) {
    // create a new node with the given data
    node *new_node = new node;
    new_node->data = data;
    new_node->next = nullptr;

    // if head is null, then our list is empty and we need to set that node to head
    if(head == nullptr) {
        head = new_node;
    } else {
        // if data is less than head, insert at the beginning of the list
        if (data < head->data) {
            new_node->next = head;
            head = new_node;
        } else {
            // find the node where node->next->data is greater than new data, so that we can insert after that position
            node *current = head;

            for (int i = 0; current->next != nullptr && data > current->next->data; i++) {
                current = current->next;
            }

            // insert the new node at the position
            new_node->next = current->next;
            current->next = new_node;
        }
    }
}

string list::to_string() {
    std::stringstream result_string_stream;
    if(head == nullptr){
        result_string_stream << "[empty list]";
    } else {
        node *current = head;
        result_string_stream << "[";
        while (current != nullptr) {
            result_string_stream << current->data;
            if(current->next != nullptr) {
                result_string_stream << ", ";
            }
            current = current->next;
        }
        result_string_stream << "]";
    }

    return result_string_stream.str();
}
