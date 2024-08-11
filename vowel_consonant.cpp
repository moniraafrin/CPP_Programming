#include<iostream>

using namespace std;
int main ()
{
    char ch;
    cout << "Enter any letter: ";
    cin >> ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "vowel";
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

        cout << "Vowel";

    else
        cout << "Consonant";

    return 0;

}
