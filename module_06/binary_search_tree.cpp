#include <iostream>

#include "binary_search_tree.h"

using std::cout;
using std::endl;

// New values insertted left when less-than or right when greater-than-or-equal-to
BinarySearchTree::BinarySearchTree() {
    root = nullptr;
}

// Find the node that would be the parent of the proposed_value.
BinaryNode *BinarySearchTree::locate_parent(int proposed_value) {
    if(root == nullptr) {
        return nullptr;
    }

    BinaryNode *current = root;
    while(current->left != nullptr || current->right != nullptr) {
        if(proposed_value < current->value && current->left == nullptr) {
            break;
        } else if (proposed_value >= current->value && current->right == nullptr) {
            break;
        } else if(proposed_value < current->value) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    return current;
}

void BinarySearchTree::add(int new_value) {
    // create new node
    BinaryNode *new_node = new BinaryNode{new_value, nullptr, nullptr};

    if(root == nullptr) {
        //assign root to that node
        root = new_node;
    } else {
        // find where it goes
        BinaryNode *parent = locate_parent(new_value);
        //update parent pointer
        if(new_value < parent->value) {
            parent->left = new_node;
        } else {
            parent->right = new_node;
        }
    }
}

int BinarySearchTree::remove(int old_value) {

    return -1;
}

bool BinarySearchTree::search(int proposed_value) {
    // result with a safe default value
    bool result = false;
    // start current at root
    BinaryNode *current = root;
    //check for nullptr
    while(current != nullptr) {
        // check current->value
        if(proposed_value == current->value) {
            result = true;
            break;
        } else if(proposed_value < current->value) {
        // move based on being less than or greater than root->value
            current = current->left;
        } else {
            current = current->right;
        }

    }

    return result;
}

void BinarySearchTree::in_order_traversal() {
    in_order_traversal_helper(root);
}

void BinarySearchTree::in_order_traversal_helper(BinaryNode *current) {
    if(current != nullptr) {
        // go left
        in_order_traversal_helper(current->left);
        // visit
        cout << current->value << endl;
        // go right
        in_order_traversal_helper(current->right);
    }
}
