#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x = 3;
    int y = 2;

    x += y; // x = x + y,,,,, 3 + 2 = 5 // x = 5
    cout << "X = "<<x<<endl;

     x -= y; // x = x - y,,,, 5 - 2 = 3 // x = 3
    cout << "X = "<<x<<endl;

     x *= y; // x = x * y,,,, 3 * 2 = 6 // x = 6
    cout << "X = "<<x<<endl;

     x /= y; // x = x / y,,,, 6 / 2 = 3 // x = 3
    cout << "X = "<<x<<endl;

     x %= y; // x = x % y,,,, 3 % 2 = 1 // x = 1
    cout << "X = "<<x<<endl;


    getch();
}
