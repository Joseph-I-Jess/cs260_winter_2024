#pragma once

#include "binary_node.h"

class BinarySearchTree {
    BinaryNode *root;
    BinaryNode *locate_parent(int proposed_value);

    void in_order_traversal_helper(BinaryNode *current);

    public:
        BinarySearchTree();
        void add(int new_value);
        int remove(int old_value);
        bool search(int proposed_value);

        void in_order_traversal();
};