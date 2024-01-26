#include "node.hpp"

class Stack {
    Node *top;
    int size;

    public:
        Stack();
        // ~Stack(); // this is the signature of a destructor
        int pop();
        void push(int new_node);
};