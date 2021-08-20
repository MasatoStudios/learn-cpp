#include <iostream>
using namespace std;

void multi()
{
    char a;
    int numinput;

    cout << "Enter a character and an integer: ";
    cin >> a >> numinput;

    cout << "Character selected: " << a << endl;
    cout << "Number selected: " << numinput << endl;
}

void variables()
{
    int num1 = 50;
    double num2 = 245.342;
    char ch = 'A';
    // endl; is responsible for each one of these statements being printed on a new line
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;
    cout << "character: " << num1 << endl;
}

void input()
{
    int num;
    cout << "Please input an integer: ";
    cin >> num;
    cout << "The number you selected was: " << num << endl;
}

int main()
{
    // prints the string in the double quotation marks
    cout << "Hello world!!!";
    variables();
    input();
    multi();
    return 0;
}