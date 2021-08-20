#include <iostream>

int age = 40;
// int can only store integers of either 2 or 4 bytes

// ============furthur examples of data types ============
// float is a 32-bit floating point number. size is 4 bytes and can accommodate seven digits
float pie = 3.14;

// double is double precision 64 bit floating point. It accommodates 15 to 16 digits its size is also 8 bytes
double large_number = 45E12; // this is equal to 45*10^12

// char is used for characters, size =1 byte
char test = 'm';

// boolean has two possible values true or false

bool cond = false;

// wchar normally used to display other language characters at a fixed width, also has more storage compared to the normal char data type
wchar_t japanese_message[] = L"こんにちは";

// used for integers, equivalent to int
signed int val = 4;

// can only store positive integers
unsigned int positive =50;

// used for small integers (-32768 to 32767)
short int small = 155;

// small positive numbers
unsigned short pos_short= 4564;



















int main()
{
    setlocale(LC_ALL, "");
    std::wcout << japanese_message << std::endl;
    return 0;
}

