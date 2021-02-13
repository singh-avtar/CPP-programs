#include <iostream>

using namespace std;

int main()
{
    int numb [6] = {44,77,35,75,34,78};
    int i , j, temp;

    for(int q=0; q<6; q++)
    {
        cout<<numb[q]<<endl;
    }
    cout<<endl;

    for(i=0; i<5; i++) // number of comparison 5 i.e. one less than no. of elements
    {
        for(j=0; j<5-i; j++)
        {
            if(numb[j]> numb[j+1])
            {
                temp = numb[j];
                numb[j] = numb[j+1];
                numb[j+1] = temp;
            }
        }
    }
    for(i=0;i<6; i++)
    {
        cout<<numb[i]<<endl;
    }

    return 0;
}
