#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2,num3;
    cout << "Enter any three numbers: ";
    cin >> num1 >> num2 >> num3;

    if(num1 > num2 && num1 > num3)
        cout << "Num1 is a large number: " << num1;

    else if(num2 > num1 && num2 > num3)
        cout << "Num2 is a large nummber: "<< num2;

    else
        cout << "Num3 is a large number: "<< num3;

    getch();
}
