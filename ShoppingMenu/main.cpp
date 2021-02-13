#include <iostream>

using namespace std;

string name[3];
float price[3];
void New_Item();
void Show_Item();
string Sort_Item();

int main()
{
    int q;
    do
    {
        cout<<endl<<"[1] New Item"<<endl;
        cout<<"[2] Show Item"<<endl;
        cout<<"[3] Sort Item"<<endl;
        cout<<"[0] Exit"<<endl;
        cout<<"Make a Selection"<<endl;
        cin>>q;

        switch(q)
        {
            case 1:
                {
                    New_Item();
                    cout<<"Items have been added"<<endl;
                    break;
                }
            case 2:
                {
                    system("cls");
                    Show_Item();
                    break;
                }
            case 3:
                {
                    Sort_Item();
                    break;
                }
        }
    }
    while(q!=0);
            cout<<endl<<"Good Bye"<<endl;
    return 0;
}
void New_Item()
{
    for(int i=0; i<3; i++)
    {
        system("cls");
        cout<<"Name of Item: ";
        cin>>name[i];
        cout<<"Price: ";
        cin>>price[i];
         system("cls");
    }
}
void Show_Item()
{
        for(int i=0;i<3;i++)
    {
        cout<<name[i]<<" "<<price[i]<<endl;
    }
}
string Sort_Item()
{
    for(int i=0; i<2;i++)
    {
        for(int j=0; j<2-i; j++)
        {
            if(name[j]>name[j+1])
            {
                string temp = " ";
                temp = name[j];
                name[j] = name[j+1];
                name[j+1] = temp;
            }
        }

    }
    for(int i =0; i<3; i++)
    {
        cout<<endl;
        cout<<name[i]<<price[i]<<endl;
    }
}

