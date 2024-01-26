#include <iostream>

#include "node.hpp"
// #include "node.cpp" // This will work to simplify our compliation, but is bad practice... use better command line or build system rules instead...

using std::cout;
using std::endl;

int main() {
    Node *node_0 = new Node;
    node_0->id = 42;
    node_0->value = 84;
    // We already set the default value for next to nullptr to be safe

    cout << "node_0.to_string(): " << node_0->to_string() << endl;

    return 0;
}