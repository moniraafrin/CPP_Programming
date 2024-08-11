#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout << "Hello World"<< endl;

    int n,i;
    cout << "Enter the number : ";
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0) // Even number
        cout << i <<endl;
    }

    getch();
}
