#include <iostream>

using namespace std;

void printTableFor();
void printTableWhile();
void printTableDoWhile();

int main()
{
    printTableFor();
    printTableWhile();
    printTableDoWhile();

    return 0;
}
void printTableFor()
{
   for(int i=1; i<=10; i++)
   {
         for(int j=1; j<=10; j++)
       {
          cout<<(i*j)<<"\t";
        }
    cout<<endl;
    }
    cout<<endl;
}
void printTableWhile()
{
    int i=1;
    while(i<=10){
        int j=1;
        while(j<=10){
            cout<<(i*j)<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
}
void printTableDoWhile()
{
    int i=1;
    do{
            int j=1;
        do{
           cout<<(i*j)<<"\t";
            j++;
        }while(j<=10);

        cout<<endl;
        i++;

    }while(i<=10);
}

