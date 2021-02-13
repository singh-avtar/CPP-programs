#include <iostream>
#include <string>

using namespace std;

int main()
{
    string names[5];
    cout<<"Enter Name: "<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"Name "<<i+1<<": ";
        cin>>names[i];
    }
    return 0;
}
