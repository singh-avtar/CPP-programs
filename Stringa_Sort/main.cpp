#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name[5];
    int i,j;

     for(i=0; i<5; i++)
    {
        cout<<"Enter Name: "<<endl;
        cin>>name[i];
    }

    for(i=0; i<4; i++)
    {
        for( j=0; j<4-i; j++)
        {
            if(name[j]> name[j+1])
            {
                string temp = "";
                temp = name[j];
                name[j] = name[j+1];
                name[j+1] = temp;
            }
        }
    }
    cout<<endl<<endl;
    for(i=0;i<6; i++)
    {
        cout<<name[i]<<endl;
    }
    return 0;
}

