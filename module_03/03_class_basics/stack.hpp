#pragma once
#include "node.hpp"

class Stack {
    Node *top;
    int size;

    public:
        Stack();
        // ~Stack(); // this is the signature of a destructor
        void push(int new_node);
        int pop();
        int get_size();
};