#include<iostream>

using namespace std;

int main()
{
    int width,height,area;

    cout << "Enter the width: ";
    cin >> width;

    cout << "Enter the height : ";
    cin >> height;

    area = width * height; // rectangle area

    cout << "The area is : "<<area<<endl<<endl;

    int base1, base2, height1, area1;

    cout << "Enter the base1 : ";
    cin >> base1;

    cout << "Enter the base2 : ";
    cin >> base2;

    cout << "Enter the height1: ";
    cin >> height1;

    area1 = 0.5 * (base1 + base2)* height1; // Trapezium

    cout << "The Area of Trapezium: "<< area1<<endl<<endl;

    int a_axix, b_axix, area2;

    cout << "Enter a_axis : ";
    cin >> a_axix;

    cout << "Enter b_axix : ";
    cin >> b_axix;

    area2 = 3.1416 * a_axix * b_axix; // Ellipse

    cout << "The area of Ellipse is : "<< area2 << endl<<endl;

    int length,area3;

    cout << "Enter the length is : ";
    cin >> length;

    area3 = length * length ; // square

    cout << "The square is : "<< area3 << endl<<endl;

    int b,h,area4;

    cout << "Enter the base : ";
    cin >> b;

    cout << "Enter the height : ";
    cin >> h;

    area4 = b * h; // parallelogram

    cout << "The area of parallelofram is : "<< area4 <<endl<<endl;

    int redius, area5, area6, theta = 30;

    cout << "Enter the redius number is : ";
    cin >> redius;

    area4 = 3.1416 * redius * redius ; //circle

    cout << "The area of circle is : "<< area4<<endl<<endl;

    area6 = 0.5 * redius *redius * theta; //sector
    cout << "The area of sector is : "<<area6<<endl;

    return 0;

}
