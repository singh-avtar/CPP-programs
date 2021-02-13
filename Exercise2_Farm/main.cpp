#include <iostream>

using namespace std;

int main()
{
    int weight=0;
    float dailyPrice=0;
    float revenue=0;
    cout<<"Enter weight = ";
    cin>>weight;
    cout<<"Daily Price = ";
    cin>>dailyPrice;
    revenue=weight*dailyPrice;
    cout<<"Revenue = "<<revenue<<endl;
    return 0;
}
