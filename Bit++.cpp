#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a, x = 0;
    char s[4];
    cin>>a;
    int i;

    for(i=0; i<a; i++)
    {
        cin>>s;
        if(s[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }

    }

    cout << x;
    return 0;

}
