#include <cassert>
#include <iostream>
#include <string>

#include "autosort_list.h"

using std::cout;
using std::endl;
using std::string;

void test_autosort_list_constructor() {
    list my_list;

    string expected_result = "[empty list]";

    string actual_result = my_list.to_string();

    cout << "expected_result: \"" << expected_result << "\"" << endl;
    cout << "actual_result: \"" << actual_result << "\"" << endl;
    cout << "expected_result.compare(actual_result): " << expected_result.compare(actual_result) << endl;

    assert(expected_result.compare(actual_result) == 0);
}

void test_autosort_list_insert_first_node() {
    list my_list;
    // insert some nodes
    string expected_result = "[1]";
    
    my_list.insert(1);
    
    string actual_result = my_list.to_string();

    assert(expected_result == actual_result);
}

void test_autosort_list_insert_second_node() {
    list my_list;
    // insert some nodes
    string expected_result = "[1, 2]";

    my_list.insert(1);
    my_list.insert(2);
    
    string actual_result = my_list.to_string();

    assert(expected_result == actual_result);
}

// after end of list
void test_autosort_list_insert_node_after_end() {
    list my_list;
    // insert some nodes
    string expected_result = "[1, 2, 6]";

    my_list.insert(1);
    my_list.insert(2);
    my_list.insert(6);
    
    string actual_result = my_list.to_string();

    assert(expected_result == actual_result);
}

void test_autosort_list_insert_node_with_same_value_as_head() {
    list my_list;
    // insert some nodes
    string expected_result = "[1, 1, 2]";

    my_list.insert(1);
    my_list.insert(2);
    my_list.insert(1);
    
    string actual_result = my_list.to_string();

    assert(expected_result == actual_result);
}

void test_autosort_list_insert_node_before_head() {
    list my_list;
    // insert some nodes
    string expected_result = "[-1, 1]";

    my_list.insert(1);
    my_list.insert(-1);
    
    string actual_result = my_list.to_string();

    assert(expected_result == actual_result);
}

void test_autosort_list_insert_node_in_middle_of_list() {
    list my_list;
    // insert some nodes
    string expected_result = "[1, 3, 5]";

    my_list.insert(1);
    my_list.insert(5);
    my_list.insert(3);
    
    string actual_result = my_list.to_string();

    assert(expected_result == actual_result);
}

int main() {
    test_autosort_list_constructor();
    test_autosort_list_insert_first_node();
    test_autosort_list_insert_second_node();
    test_autosort_list_insert_node_after_end();
    test_autosort_list_insert_node_with_same_value_as_head();
    test_autosort_list_insert_node_before_head();
    test_autosort_list_insert_node_in_middle_of_list();



    return 0;
}