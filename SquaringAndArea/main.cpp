#include <iostream>

using namespace std;
const float pi =3.14;


float squaring(float Number)
{
    return Number*Number;
}
void circleArea(float r)
{
    cout<<"Result Circular Area: "<<squaring(r)*pi<<endl;

}
int main()
{
    float sqNumber;
    float radius;
    cout<<"Entering decimal number: ";
    cin>>sqNumber;
    cout<<"Result of Square: "<<squaring(sqNumber)<<endl;
    cout<<"Enter the radius: ";
    cin>>radius;
    circleArea(radius);
    return 0;
}
