#include <iostream>
using namespace std;
int main()
{
    float a, b=0, c, i=0, l, h, y, p, q, r;
    
    cout<<"Enter a number\n";
    cin>>a;
    do
    {
        b = i + b;
        i++;
    }
    while(i<=a);
    cout<<b<<endl;
    
    if (int(b)%2 == 0)
    {
        cout<<"Now as the addition is even\n";
        cout<<"Enter one side of triangle: ";
        cin>>p;
        cout<<"Enter second side of traingle: ";
        cin>>q;
        cout<<"Enter third side of triangle: ";
        cin>>r;
        cout<<"The perimeter of the triangle is: "<<p+q+r;
        
    }
    else
    {
        cout<<"Now that the number is odd\n";
        cout<<"Enter the first side of the rectangle: ";
        cin>>l;
        cout<<"Enter the second side of the rectangle: ";
        cin>>h;
        cout<<"The perimeter of rectangle is: "<<l+h;
    }
}
