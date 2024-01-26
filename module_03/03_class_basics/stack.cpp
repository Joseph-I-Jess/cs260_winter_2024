#include "stack.hpp"

Stack::Stack() {
    top = nullptr;
    size = 0;
}

int Stack::pop() {
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
