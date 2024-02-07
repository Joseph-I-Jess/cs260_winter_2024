#include <iostream>
#include <stdexcept>

#include "node.hpp"
// #include "node.cpp" // This will work to simplify our compliation, but is bad practice... use better command line or build system rules instead...
#include "stack.hpp"

using std::cout;
using std::endl;
using std::runtime_error;

int main() {
    Node *node_0 = new Node;
    node_0->id = 42;
    node_0->value = 84;
    // We already set the default value for next to nullptr to be safe

    cout << "node_0.to_string(): " << node_0->to_string() << endl;

    Stack *my_stack = new Stack;
    // Stack a_stack;

    cout << "my_stack->get_size(): " << my_stack->get_size() << endl;
    cout << "sizeof(my_stack): " << sizeof(my_stack) << endl;
    cout << "sizeof(*my_stack): " << sizeof(*my_stack) << endl;

    // cout << "sizeof(a_stack): " << sizeof(a_stack) << endl;
    // cout << "a_stack.get_size(): " << a_stack.get_size() << endl;

    cout << "Pushing 42 onto stack." << endl;
    my_stack->push(42);
    cout << "my_stack->get_size(): " << my_stack->get_size() << endl;
    cout << "Popping off of stack, should be 42." << endl;
    int result = my_stack->pop();
    cout << "my_stack->pop(): " << result << endl;
    cout << "my_stack->get_size(): " << my_stack->get_size() << endl;

    cout << "Popping off of stack, ???." << endl;
    try {
        result = my_stack->pop();
        cout << "my_stack->pop(): " << result << endl;
    }
    catch(runtime_error re) {
        cout << "Error occurred: " << re.what() << endl;
    }
    cout << "my_stack->get_size(): " << my_stack->get_size() << endl;

    return 0;
}