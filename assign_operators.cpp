#include <iostream>
using namespace std;

int main(){
    int a, b;

    // 2 is assigned to a
    a = 2;

    // 7 is assigned to b
    b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nAfter a += b;" << endl;

    // assigned the sum of a and b to a
    a += b; // a = a + b
    cout << "The sum of a and b is: " << a << endl;

    return 0;
}