#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a = 32;
    int b = 12;
    int c;

    c = a & b; // Bitwise and,,binary digit niye kaj kore ,,,decimal theke binary convert kore 2 ta value er moddhe and(&) kore
    cout << c << endl;

    c = a | b; // Bitwise or,,binary convert kore or( | ) kore
    cout << c << endl;

    c = a ^ b; // Bitwise xor,,binary convert kore xor( ^ ) kore
    cout << c << endl;

    c = a >> 3; // Bitwise Right shift,,,i will divide 32 three times
    cout << c << endl;

    c = a << 3; // Bitwise left shift,,,,i will multiply 32 three times
    cout << c << endl;

    c = a - b; // bitwise not
    cout << c << endl;

    getch();
}
