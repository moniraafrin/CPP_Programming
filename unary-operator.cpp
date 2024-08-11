#include<iostream>

using namespace std;

int main()
{
    int x = 10;
    int result = -x; //unary minus
    cout << result<< endl;

    int y = 9;
    int result1 = +y; // unary plus
    cout << result1<< endl;

    int A = 5;
    int B = 6;

    A = B++; // a = 6
    B = A++; // b = 6 + 1 = 7
    int C = --A; // c = 7 - 1 = 6
    int D = ++B; // d = 6 + 1 = 7

    cout << "A = "<<A<<endl;
     cout <<"B = "<<B<<endl;
     cout << "C = "<<C<<endl;
     cout << "D = "<<D<<endl;

}
