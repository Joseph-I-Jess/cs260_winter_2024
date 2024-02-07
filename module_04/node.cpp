#include "node.hpp"


// #######################################################
//Default constructor.
Node::Node() {
    this->id = 0;
    this->value = 0;
    this->next = nullptr;
}

// Return this object's state as a human readable string.
string Node::to_string() {
    string result = "id: " + std::to_string(this->id) +
        ", value: " + std::to_string(this->value) +
        ", next: " + std::to_string((long long)(this->next));

    return result;
}
