#include <iostream>
#include <string>

#include "node.hpp"

int main () {
    Node<float> myNode;
    myNode.value = 3.14;

    std::cout << "myNode.value: " << myNode.value << std::endl;

    Node<string> stringNode;
    stringNode.value = "hello";
    std::cout << "stringNode.value: " << stringNode.value << std::endl;

    return 0;
}