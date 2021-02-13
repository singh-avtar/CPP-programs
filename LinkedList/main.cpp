#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> L1;
    list<string> list2;
    list<double> list3;
    int x=1;
    string name;
    //L1.push_back(0);
    while(x != 0)
    {
      cout<<"Enter an Integer Number:";
        cin>>x;
        L1.push_back(x);
    }
    /*
     for(int i=0; i<5; i++)
     {
        cout<<"Enter an Integer Number:";
        cin>>x;
        L1.push_back(x);
       cout<<"Enter Name: ";
       cin>>name;
        list2.push_back(name);
     }
     */
     cout<<"Before Sorting integer"<<endl;
     list<int>::iterator it;
     for( it= L1.begin(); it != L1.end(); it++)
     {
         cout<<*it<<"\t";
     }
     cout<<endl;
     /*
     it = find(L1.begin(),L1.end(),3);
     L1.insert(it, 999);
     L1.erase(it);



     for( it= L1.begin(); it != L1.end(); it++)
     {
         cout<<*it<<"\t";
     }
     */

     L1.sort();

     cout<<"After Sorting interger"<<endl;

     for(it = L1.begin(); it != L1.end(); it++)
     {
         cout<<*it<<"\t";
     }
     cout<<endl;
/*
      //Display entered names
      cout<<"Before Sorting names"<<endl;
     for(list<string>::iterator it = list2.begin(); it != list2.end(); it++)
     {
         cout<<*it<<"\t";
     }
     cout<<endl;
     list2.sort();
     cout<<"After Sorting Name"<<endl;
     for(list<string>::iterator it = list2.begin(); it != list2.end(); it++)
     {
         cout<<*it<<"\t";
     }
*/
       return 0;
}
