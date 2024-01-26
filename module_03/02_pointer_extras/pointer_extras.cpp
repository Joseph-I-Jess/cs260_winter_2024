#include <iostream>

using std::cout;
using std::endl;

int main() {
    int num = 42;
    // int *num_ptr, *num_2_ptr, num_3_ptr; // num_3_ptr is not a pointer type
    // int num_list[5], num_2_list; // num_2_list is not an array type
    int *num_3_list[10];

    int num_list[] = {1, 10, 100, 1000, 10000};
    int *num_ptr = num_list;

    cout << "*num_ptr: " << *num_ptr << endl;
    cout << "*num_ptr + 1: " << *num_ptr + 1 << endl;
    cout << "*(num_ptr + 1): " << *(num_ptr + 1) << endl;
    cout << "*(num_ptr + 2): " << *(num_ptr + 2) << endl;
    for(int i = 3; i < 20; ++i) {
        cout << "*(num_ptr + " << i << "): " << *(num_ptr + i) << endl;
    }

    // int offset = 1000000;
    // cout << "*(num_ptr + " << offset << "): " << *(num_ptr + offset) << endl;

    return 0;
}