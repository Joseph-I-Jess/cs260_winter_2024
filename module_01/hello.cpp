#include <iostream>

using std::cout;
using std::endl;

/* Main function */
int main() {

    char mander = 65; // same as 'A'
    int eger = 25;
    float rootBeer = 3.14;
    bool ean = false;
    

    unsigned short shorty = 0;
    long long longy = 4200000000000000000;
    double precision = 6.28;

    cout << "Hello STD?" << endl << mander << endl << eger << endl << rootBeer << endl <<
        ean << endl << shorty << endl << longy << endl << precision << endl;

    cout << "eger / shorty: " << eger / shorty;

    return 0;
}
