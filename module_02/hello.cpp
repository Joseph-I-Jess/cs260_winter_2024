#include <cstdio>
#include <iostream>

// #define true 1
// #define false 0
// #define pi 3.14159265358979323

using std::cout;
using std::endl;

// forward declaration or also called function prototype
int dublin(int input);
void print_array(int *arr, int arr_size);

// A struct that just holds some simple values.
struct node {
    int id;
    int value;
    struct node *next;
};

/* Main function */
int main() {

    char mander = 'A'; // same as 'A'
    int eger = 24;
    float rootBeer = 3.14;
    bool ean = false;

    unsigned short shorty = 0;
    long long longy = 4200000000000000000;
    double precision = 6.28;

    // cout << "Hello STD?" << endl << (int)mander << endl << eger << endl << rootBeer << endl <<
    //     ean << endl << shorty << endl << longy << endl << precision << endl;

    // // cout << "eger / shorty: " << eger / shorty;

    // if(eger == 25) {
    //     cout << "The if statement condition resolves as truthy." << endl;
    // } else if (eger) {
    //     cout << "The else if clause condition resolves as truthy." << endl;
    // } else {
    //     cout << "The if statement condition resolves as falsey." << endl;
    // }

    // cout << "This statement will always run." << endl;
    // cout << "This statement will also always run." << endl;
    
    // printf("This is a string with some formatting, such as an int %i, or a character %c\n", mander, mander);
    
    // //essentially now a while loop
    // int i = 0;
    // for (; ; )
    // {
    //     // cout << "i: " << i << endl;
    //     printf("i: %i\n", i);
    //     i++;
    //     if (i >= 10) {
    //         break;
    //     }
    // }
    // printf("i (after the loop): %i\n", i);
    
    // while (i < 20) {
    //     printf("i (during while loop): %i\n", i);
    //     i++;
    // }

    // functions
    // int original_input = 21;
    // int dubled = dublin(original_input);
    // cout << "dublin(" << original_input << "): " << dubled << endl;

    //arrays and then arrays passed to functions
    // int numbers_size = 10;
    // int numbers[numbers_size];
    int numbers[10];
    int numbers_size = sizeof(numbers) / sizeof(numbers[0]);
    for(int index = 0; index < numbers_size; ++index) { // could have used the later loop for both setting the initial values and then printing them...
        numbers[index] = index * 2;
    }
    // for(int index = 0; index < 5; ++index) {
    //     cout << "numbers["<< index << "] " << numbers[index] << endl;
    // }
    // print_array(numbers, numbers_size);

    // size of basics
    // long long number = 42; // value of number is not important, just that it has a known datatype
    // int bits_per_byte = 8; // there are 8 bits per byte
    // cout << "sizeof number (in bits): " << sizeof(number) * bits_per_byte << endl;
    // cout << "sizeof int (in bytes): " << sizeof(int) << endl;

    // how about our array?
    // cout << "sizeof(numbers) (in bytes): " << sizeof(numbers) << endl;
    // cout << "sizeof(numbers[0]) (in bytes): " << sizeof(numbers[0]) << endl;
    // cout << "sizeof(numbers) / sizeof(numbers[0]) (in bytes): " << sizeof(numbers) / sizeof(numbers[0]) << endl;

    // pointer basics
    // char *mander_ptr = &mander;
    // printf("mander_ptr: %p\n", mander_ptr);
    // printf("*mander_ptr: %c (%i)\n", *mander_ptr, *mander_ptr);
    // printf("&mander_ptr: %p\n", &mander_ptr);

    // printf("mander: %c (%i)\n", mander, mander);
    // printf("&mander: %p\n", &mander);

    // // double pointer, also called a pointer to a pointer
    // int *eger_ptr = &eger;
    // int **eger_ptr_ptr = &eger_ptr;

    // printf("eger_ptr: %p\n", eger_ptr);
    // printf("*eger_ptr: %i\n", *eger_ptr);
    // printf("&eger_ptr: %p\n", &eger_ptr);

    // printf("eger: %i\n", eger, eger);
    // printf("&eger: %p\n", &eger);

    // // verify double pointer info
    // printf("eger_ptr_ptr: %p\n", eger_ptr_ptr);
    // printf("*eger_ptr_ptr: %p\n", *eger_ptr_ptr);
    // printf("**eger_ptr_ptr: %i\n", **eger_ptr_ptr);
    // printf("&eger_ptr_ptr: %p\n", &eger_ptr_ptr);
    
    // printf("eger_ptr: %p\n", eger_ptr);
    // printf("*eger_ptr: %i\n", *eger_ptr);
    // printf("&eger_ptr: %p\n", &eger_ptr);
    
    // cout messes up my data types for me...
    // cout << "mander_ptr: " << mander_ptr << endl;
    // cout << "*mander_ptr: " << *mander_ptr << endl;
    // cout << "&mander_ptr: " << &mander_ptr << endl;

    // structs
    struct node my_node_1{1, 21, nullptr};
    cout << "my_node_1.id: " << my_node_1.id << endl;
    cout << "my_node_1.value: " << my_node_1.value << endl;
    cout << "my_node_1.next: " << my_node_1.next << endl;
    // cout << "my_node: " << my_node << endl; // node does not define how to act when the << operator is used on it
    // printf("my_node: %i", my_node); // a struct is just a collection of its values packed into the structure's space...

    // a second node
    struct node my_node_2{2, 42, nullptr};
    cout << "my_node_2.id: " << my_node_2.id << endl;
    cout << "my_node_2.value: " << my_node_2.value << endl;
    cout << "my_node_2.next: " << my_node_2.next << endl;

    my_node_1.next = &my_node_2;
    cout << "my_node_1.id: " << my_node_1.id << endl;
    cout << "my_node_1.value: " << my_node_1.value << endl;
    cout << "my_node_1.next: " << my_node_1.next << endl;
    cout << "&my_node_2: " << &my_node_2 << endl;

    cout << "my_node_2.id: " << my_node_2.id << endl;
    cout << "my_node_2.value: " << my_node_2.value << endl;
    cout << "my_node_2.next: " << my_node_2.next << endl;

    cout << endl << "(*my_node_1.next).id: " << (*my_node_1.next).id << endl; // dereference with * and then look up its id
    cout << "my_node_1.next->id: " << my_node_1.next->id << endl; // arrow notation
    cout << "my_node_1.next->value: " << my_node_1.next->value << endl;
    cout << "my_node_1.next->next: " << my_node_1.next->next << endl;

    // a third node
    node my_node_3{3, 9999, nullptr};
    my_node_2.next = &my_node_3;

    node *current_node = &my_node_1;// leaving off struct optional keyward
    while(current_node != nullptr) {
        cout << "current_node->id: " << current_node->id << endl;
        current_node = current_node->next;
    }

    // classes


    // more advancved pointers?

    return 0;
}

// Doubles an input integer and returns it.
int dublin(int input) {
    return input * 2;
}

void print_array(int *arr, int arr_size) {

    // cout << "sizeof(arr) (in bytes): " << sizeof(arr) << endl;
    // cout << "sizeof(arr[0]) (in bytes): " << sizeof(arr[0]) << endl;
    // cout << "sizeof(arr) / sizeof(arr[0]) (in bytes): " << sizeof(arr) / sizeof(arr[0]) << endl;

    // int arr_size = sizeof(arr) / sizeof(arr[0]);
    for(int index = 0; index < arr_size; ++index) {
        cout << "numbers["<< index << "] " << arr[index] << endl;
    }
}
