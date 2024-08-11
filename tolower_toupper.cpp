
#include<iostream>

using namespace std;
int main ()
{
    char ch;
    cout << "Enter any letter: ";
    cin >> ch;

    ch = tolower(ch); // capital letter ke small letter kore
  //ch = toupper(ch),,,, small letter ke capital letter kore

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "vowel";
    else
        cout << "Consonant";

    return 0;

}
