#include <iostream>

using namespace std;

int main()
{
    const float capri = 1.1;     // declared & initialized constants
    const float nogger = 1.6;
    const float cornetto = 2.3;
    int input;
    double temp,note,total=0;
    cout<<"Enter your note:";
    cin>>note;          //Money enter by user e.g. Note of 5 Euro, 10 Euro , etc.
    temp=note;
do                                                      //"do-while" loop
{
        cout<<"\t ----------------MENU----------------"<<endl;
        cout<<"\t Enter [1] to select Capri: 1.10 Euro"<<endl;
        cout<<"\t Enter [2] to select Nogger: 1.60 Euro"<<endl;
        cout<<"\t Enter [3] to select Cornetto: 2.30 Euro"<<endl;
        cout<<"\t Enter [4] to get Total amount & Change"<<endl;
        cout<<"\t Enter [5] to Order again"<<endl;
        cout<<"\t Enter [0] to Exit"<<endl;
        cin>>input;
        switch(input)   //"Switch statements inside a "do-while" loop
        {
        case 1:
            {
                note = note-capri;  //Updates the value entered Note by subtracting the cost of particular Ice Cream
                total += capri;        // To make total amount of bill orders will get summed up in "total" variable
                break;
            }
        case 2:
            {
                note = note-nogger;
                total += nogger;
                break;
            }
        case 3:
            {
                note = note-cornetto;
                total += cornetto;
                break;
            }
        case 4:
            {
              if(total>temp)     //"if-else" conditional control structure/-> if user total amount would be greater than entered Note
              {
                   system("cls");
                  cout<<"\t Total is greater than your note"<<endl;
                  cout<<"\t Please enter orders again"<<endl<<endl;
                  return main();
              }
              else
              {
                  system("cls");  // clear screen
                  cout<<"\t TOTAL AMOUNT: "<<total<<endl<<endl;
                  cout<<"\t CHANGE: "<<note<<endl<<endl;
                cout<<"\t THANK YOU FOR ORDERING"<<endl<<endl<<endl;
              }break;
            }
        case 5:
            {
                return main();  //To make order again
            }
     }
}while(input != 0);  //"0" for coming out of the "do-while" loop

    return 0;
}
