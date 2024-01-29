#pragma once

#include <string>

using std::string;

template <typename t>
class Node {
    public:
        int id;
        t value;
        Node *next;

        Node() {
            this->id = 0;
            // this->value;
            this->next = nullptr;
        };

        string to_string() {
            string result = "id: " + std::to_string(this->id) +
            ", value: " + std::to_string(this->value) +
            ", next: " + std::to_string((long long)(this->next));

        return result;
        };
};
