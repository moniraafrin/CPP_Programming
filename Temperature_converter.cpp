#include<iostream>

using namespace std;
int main()
{
    int fahrenheit,celsius, cels, fahrn, kelvin;
    cout << "The celsius is : ";
    cin >> celsius;

    fahrenheit = (1.8 * celsius) + 32; // celsius to fahrenheit

    cout << "The Fahrenheit is : "<< fahrenheit<<endl<<endl;

    cout << "The fahrn is : ";
    cin >> fahrn;

    cels = (fahrn - 32)/1.8; // fahrenheit to celsius

    cout << "The Celsius is : "<< cels<< endl<<endl;

    kelvin = cels + 273;// Kelvin
    cout << "The Kelvin is : "<< kelvin;
    return 0;

}
