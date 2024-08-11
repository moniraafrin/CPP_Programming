#include<iostream>

using namespace std;

int main()
{
    //sizeof() operator er sahajjhe jekono data type er size ber korte parbo
    // eta ekta keyword but operator hisebe use kora hoy

    int a;
    float f;
    double d;
    char ch;
    char name[20];

    int c = sizeof(a);
    cout << c << endl;

    float n = sizeof(f);
    cout << n << endl;

    double x = sizeof(d);
    cout << x << endl;

    int y = sizeof(ch);
    cout << y << endl;

    int z = sizeof(name);
    cout << z << endl;

    // comma operator

    int i,j,sum;

    sum = (i=20,j=20, sum = i + j);

    cout << sum;


    return 0;

}
