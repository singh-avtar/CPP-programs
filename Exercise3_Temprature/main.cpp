#include <iostream>

using namespace std;
float c;
float f;
int stepSize, MaxValue;
float FtoC(float);

int main()
{
    cout<<"Enter temperature in fahrenheit: ";
    cin>>f;
    cout<<"Step Size: ";
    cin>>stepSize;
    cout<<"Maximum Value: ";
    cin>>MaxValue;
    for(float i=f;f<=MaxValue;f=f+stepSize){
            c=FtoC(f);
        cout<<"Fahrenheit:"<<f<<" Celsius:"<<c<<endl;
    }

    return 0;
}
float FtoC(float b)
{
    const int a=32;
    b = ((f - a)*5)/9;
    return b;
}
while(c)
