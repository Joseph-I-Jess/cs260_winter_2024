#include <stdexcept>

#include "stack.hpp"

using std::runtime_error;

Stack::Stack() {
    top = nullptr;
    size = 0;
}

void Stack::push(int new_value) {
    // create new node
    Node *new_node = new Node;
    // set values of node
    new_node->id = this->size;
    this->size++;
    new_node->value = new_value;
    // put new node in list
    new_node->next = top;
    // update stack
    this->top = new_node;
}

// Attempt to pop off of stack and return that value or throw an exception.
int Stack::pop() {
    if(top != nullptr){
        // get value of top
        int old_top_value = this->top->value;
        // get old node
        Node *old_top = this->top;
        // move top down
        this->top = this->top->next;
        // decrement size
        this->size--;
        // delete old top
        delete old_top; // we may want to create a destructor to be used here...
        // return old top value
        return old_top_value;
        //~15 operations above 
        //+2 operations to initialize loop
        //(3+5)n operations in the loop declaration plus the loop body
        // 8n + 17 => O(n)
        // for(int i = 0; i < this->size; i++) {
        //     cout << "i: " << i << endl;
        // }
    } else {
        throw runtime_error("The stack is empty!");
    }
    
}

int Stack::get_size() {
    return this->size;
}
