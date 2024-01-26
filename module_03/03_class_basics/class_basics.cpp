#include "class_basics.hpp"


// #######################################################
// private methods
void Node::set_id(int new_id) {
    this->id = new_id;
}

void Node::set_value(int new_value) {
    this->value = new_value;
}

void Node::set_next(Node *new_next) {
    this->next = new_next;
}


// #######################################################
// public methods
Node::Node (int new_id, int new_value, Node *new_next) {
    this->id = new_id;
    this->value = new_value;
    this->next = new_next;
}

Node::Node (int new_id, int new_value) {
    this->id = new_id;
    this->value = new_value;
    this->next = nullptr;
}

int Node::get_id() {
    return this->id;
}

int Node::get_value() {
    return this->value;
}

Node *Node::get_next() {
    return this->next;
}

// Return this object's state as a human readable string.
string Node::to_string() {
    string result = "id: " + std::to_string(this->id) +
        ", value: " + std::to_string(this->value) +
        ", next: " + std::to_string((long long)(this->next));

    return result;
}
