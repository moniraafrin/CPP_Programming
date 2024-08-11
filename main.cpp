#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int num1 = 10,num2= 20;
    cout << "number1 = "<<num1<<endl << "number2 = "<<num2<<endl;

    char ch[15] = "Arfin Mim"; //string character
    cout << "character = "<<ch<<endl;

    int number;
    cout << "Enter any number : ";
    cin >> number; // input  number
    cout << "The number is : "<<number<<endl;

    int num3, num4;
    num3 = 40;
    num4 = 20;

    cout <<showpoint; // formating output,,,,showpoint
    float sum = num3 + num4;
    cout << setw(24) << "The sum is :"<<sum<<endl; //with decimal point there is showing 6 digit

    cout <<noshowpoint; // kichui show korbe na jemon ache temoni thakbe,,,,noshowpoint
    float sub = num3 - num4;
    cout << setw(25)<< "The substraction is : "<<sub<<endl;

    cout <<fixed; //without decimal point there is showing after demial point 10 digit
    float mul = num3 * num4;
    cout << setw(25)<< setprecision(10)<<"The Multiplication is : "<<mul<<endl; //Fixed,,,,,setprecision

    cout <<showpoint; // showpoint,,,,setprecision
    float div = num3 / num4;
    cout << setw(25) << setprecision(2)<< "The division is : "<<div<<endl; //after decimal point there is showing 2 digit

    int rem = num3 % num4;
    cout << setw(25) << "The reminder is : "<<rem<<endl;

    return 0;

}
