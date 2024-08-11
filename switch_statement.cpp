//switch-case
/* switch(expression)
{
    case value1:

           //codes to be executed
           break;

    case value2:

           //codes to be executed
           break;

    default:
          //codes to be executed

}*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int digit;
    cout << "Enter a digit : ";
    cin >> digit;

    switch(digit)
    {
    case 0:
        cout <<"Zero";
        break;
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "Three";
        break;
    case 4:
        cout << "Four";
        break;
    case 5:
        cout << "Five";
        break;

    default:
        cout << "Not a digit";

    }
getch();
}

