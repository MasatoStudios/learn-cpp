#include <iostream>
using namespace std;

int main(){
    int a, b;
    a = 5;
    b = 8;
    bool result;

    // a not equal to b AND a less than b
    result = (a != b) && (a < b); //true
    cout << "(5 != 8) && (5 > 8) is " << result << endl;

    // a equal to b AND a less than b
    result = (a == b) && (a < b); //false
    cout << "(5 == 8) && (5 < 8) is " << result << endl;

    // a equal to b AND a greater than b
    result = (a == b) && (a > b); // false
    cout << "(5 == 8) && (5 < 8) is " << result << endl;

    // a not equal to b OR a less than b
    result = (a != b) || (a < b); // true
    cout << "(5 != b) || (5 < 8) is " << result << endl;

    // a not equal to b OR a greater than b
    result = (a != b) || (a > b); //true
    cout << "(5 != 8) || (5 > 8) is " << result << endl;

    // a equal b OR a greater than b
    result = (a == b) || (a > b); //false
    cout << "(5 == 8) || (5 > 8) is " <<  result << endl;

    // NOT(a == b) its not true and then the ! outside means it becomes true
    result = !(a == b); //true
    cout << "!(5 == 8) is " << result << endl;

    // NOT(a == b). its false as in the brackets its true and then the ! means it goes to negative 
    result = !(a == a); //false
    cout << "!(5 == 5) is " << result << endl;

    return 0; 
}