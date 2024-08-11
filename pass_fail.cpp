#include<iostream>

using namespace std;

int main()
{
    int mark;
    cout << "Enter the mark: ";
    cin >> mark;

    if(mark > 100)
        cout << "The mark is invalid";

    else if (mark < 0)
        cout << "The mark is invalid";

    else if(mark >= 80)
        cout << "The letter grade is A+";

    else if (mark >= 70)
        cout << "The letter grade is A";

    else if(mark >=60)
        cout << "The letter grade is A-";

    else if(mark >= 50)
        cout << "The letter grade is B";

    else if(mark >= 40)
        cout << "The letter grade is C";

    else if (mark >= 33)
        cout << "The letter grade is D";

    else
        cout << "fail";

    return 0;


}
