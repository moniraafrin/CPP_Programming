// conditional or ternary operator
// Expression1 ? Expression2 : Expression3
// ? = if
// : = else

#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1, num2;
    num1 = 20;
    num2 =  30;

    int max = (num1 > num2) ? num1 : num2;

    cout << "The max number is : "<<max <<endl;

    int num;
    cout << "Enter any number : ";
    cin>> num;

    (num % 2 == 0) ? cout << num << " is Even" : cout << num << " is Odd";

    getch();

}
