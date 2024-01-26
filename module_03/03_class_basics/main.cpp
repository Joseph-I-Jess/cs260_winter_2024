#include <iostream>

#include "class_basics.hpp"
// #include "class_basics.cpp" // This will work to simplify our compliation, but is bad practice... use better command line or build system rules instead...

using std::cout;
using std::endl;

int main() {
    Node *node_0 = new Node(3, 12);

    cout << "node_0.to_string(): " << node_0->to_string() << endl;

    return 0;
}