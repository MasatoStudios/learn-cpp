#include <iostream>
using namespace std;

int main(){
    int a, b;
    a = 3;
    b = 5;
    bool result;

    // if a is equal to b it will return true
    result = (a == b); //false
    cout << "3 == 5 is " << result << endl;

    // if a is not equal to b it will return true
    result = (a != b); //true
    cout << "3 != 5 is " << result << endl;

    // if a is greater than b it will return true
    result = a > b; //false
    cout << "3 > 5 is " << result << endl;

    // if a is less than b it will return true
    result = a < b; //true
    cout << "3 < 5 is " << result << endl;

    // if a is greater than or equal to b it will return true
    result = a >= b; //false
    cout << "3 >= 5 is " << result << endl;

    // if a is less than or equal to b it will return true
    result = a <= b; //true
    cout << "3 <= 5 is " << result << endl;

    return 0;
}