#include <iostream>

using namespace std;
int weight=0;
float price=0;
float revenue=0;
void Data_query()
{
    cout<<"Enter Weight: ";
    cin>>weight;
    cout<<"Enter Price: ";
    cin>>price;
}
void Calculate_revenue()
{
    revenue=weight*price;
    cout<<"Revenue: "<<revenue;
}


int main()
{
    Data_query();
    cout<<endl;
    Calculate_revenue();
    return 0;
}
