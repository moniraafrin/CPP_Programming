#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "The number is Positive.";
    }
    if (num < 0)
    {
        cout << "The number is negative.";
    }
    if (num == 0)
    {
        cout << "The number is zero.";
    }

    getch();

}
