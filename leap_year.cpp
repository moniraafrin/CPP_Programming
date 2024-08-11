#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int year;
    cout << "Enter any Year: ";
    cin >> year;

    if (year % 4 == 0 && year % 100 !=0 || year % 400 == 0)
        cout << "The year is a Leap year";

    else
        cout << "The year is not leap year";

    getch();
}
