#include <iostream>
#include <cstdlib>

using namespace std;
class Invoice
{
    friend class Data;
private:
    int InvNo;
    string month;
    double food, house, cloths, fuel, insurance;
    double entertainment, miscellaneous, transportation, total;
    Invoice *next;
public:
    //Invoice(){}
    Invoice(int i, string m, double f, double h, double c, double fl, double ins, double ent, double mis, double tns, double t) : InvNo(i), month(m), food(f), house(h), cloths(c), fuel(fl), insurance(ins), entertainment(ent), miscellaneous(mis), transportation(tns), total(t)
    { }
    int get_InvNo() { return InvNo; }
    string get_month() { return month; }
    double get_food() { return food; }
    double get_house() { return house; }
    double get_cloths() { return cloths; }
    double get_fuel() { return fuel; }
    double get_insurance() { return insurance; }
    double get_entertainment() { return entertainment; }
    double get_miscellaneous() { return miscellaneous; }
    double get_transportation() { return transportation; }
    double get_total() { return total; }
    Invoice *get_next() { return next; }
};

class Data
{
private:
    Invoice *beginning;
    Invoice *End;
public:
    Data() { beginning = End = 0; }

    void add()      //Function to Insert nodes
{
     int y=0;
     Invoice pass;
    do
    {
        system("cls");
        cout<<"Enter Invoice Number:";
        while(!(cin>>pass.InvNo))           //Input validation loop
        {
            cout<<"Error: enter a Integer: ";  // Invalid input error msg
            cin.clear();                            //clear previous input
            cin.ignore(23, '\n');               //Discarding previous inputs
        }
        while(!checkUN(pass.InvNo))         //"While" loop to check the unique invoice number
        {
            cout<<"Enter Unique Invoice Number"<<endl;
            cin>>pass.InvNo;
        }
        cout<<"Enter Month name: ";
        cin>>pass.month;
        cout<<"Enter expenses for food:";
        while(!(cin>>pass.food))
        {
            cout<<"Error: enter a number: ";
            cin.clear();
            cin.ignore(23, '\n');
        }
        cout<<"Enter expenses for house:";
        while(!(cin>>pass.house))
        {
            cout<<"Error: enter a number: ";
            cin.clear();
            cin.ignore(23, '\n');
        }
        cout<<"Enter expenses for cloth:";
         while(!(cin>>pass.cloths))
        {
            cout<<"Error: enter a number: ";
            cin.clear();
            cin.ignore(23, '\n');
        }
        cout<<"Enter expenses for fuel:";
         while(!(cin>>pass.fuel))
        {
            cout<<"Error: enter a number: ";
            cin.clear();
            cin.ignore(23, '\n');
        }
        cout<<"Enter expenses for insurance:";
         while(!(cin>>pass.insurance))
        {
            cout<<"Error: enter a number: ";
            cin.clear();
            cin.ignore(23, '\n');
        }
        cout<<"Enter expenses for entertainment:";
         while(!(cin>>pass.entertainment))
        {
            cout<<"Error: enter a number: ";
            cin.clear();
            cin.ignore(23, '\n');
        }
        cout<<"Enter expenses for miscellaneous:";
         while(!(cin>>pass.miscellaneous))
        {
            cout<<"Error: enter a number: ";
            cin.clear();
            cin.ignore(23, '\n');
        }
        cout<<"Enter expenses for transportation:";
         while(!(cin>>pass.transportation))
        {
            cout<<"Error: enter a number: ";
            cin.clear();
            cin.ignore(23, '\n');
        }

        Invoice *newElement = new Invoice(pass);
        if(isEmpty())
        {
            End = beginning = newElement;
        }
        else{
            End->next = newElement;
            End = newElement;
            End->next = 0;
        }
        cout<<"ENTER (1) TO ADD MORE"<<endl;
        cout<<"ENTER (0) TO STOP ADDING"<<endl;
        cin>>y;
    }while( y !=0 );
}
bool checkUN(int num) //Function to check unique invoice number
{
    Invoice *Uniq =0;
    Uniq = search(num);
    return  Uniq == 0;

}
bool isEmpty()
{
    return (beginning == 0) ? true : false;
}
void display() //Function to display all data of nodes
{
    system("cls");
    Invoice *obj = beginning;
    while(obj != 0)
     {
         obj->total += obj->food+obj->house+obj->cloths+obj->fuel+obj->insurance;
         obj->total += obj->transportation+obj->entertainment+obj->miscellaneous;
         if(obj->total>500){cout<<"---SPENT MORE THAN PLANNED---"<<endl;}
       cout<<"\t *********"<<obj->month<<"********"<<endl;
       cout<<"\t INVOICE NO.:"<<obj->InvNo<<endl<<endl;
       cout<<"\t FOOD:"<<obj->food<<endl;
       cout<<"\t HOUSE:"<<obj->house<<endl;
       cout<<"\t CLOTHS:"<<obj->cloths<<endl;
       cout<<"\t FUEL:"<<obj->fuel<<endl;
       cout<<"\t INSURANCE:"<<obj->insurance<<endl;
       cout<<"\t ENTERTAINMENT:"<<obj->entertainment<<endl;
       cout<<"\t MISCELLANEOUS:"<<obj->miscellaneous<<endl;
      cout<<"\t TRANSPORTATION:"<<obj->transportation<<endl;
       cout<<"---------------------------------------------"<<endl;
       cout<<"\t TOTAL:"<<obj->total<<endl;
       cout<<"---------------------------------------------"<<endl;

       obj = obj->next;
     }
 }
void display_c() //Function to represents total amount of all categories
 {
     system("cls");
     Invoice *c = beginning;
     double tfood, thouse, tcloths, tfuel, tinsurance, tentertainment, tmiscellaneous, ttransportation;
     while(c != 0)
     {
         tfood += c->food;
         thouse += c->house;
         tcloths += c->cloths;
         tfuel += c->fuel;
         tinsurance += c->insurance;
         tentertainment += c->entertainment;
         tmiscellaneous += c->miscellaneous;
         ttransportation += c->transportation;
         c = c->next;
     }
     cout<<"Total Food Expenses:"<<tfood<<endl;
     cout<<"Total House Expenses:"<<thouse<<endl;
     cout<<"Total Cloths Expenses:"<<tcloths<<endl;
     cout<<"Total Fuel Expenses:"<<tfuel<<endl;
     cout<<"Total Insurance Expenses:"<<tinsurance<<endl;
     cout<<"Total Entertainment Expenses:"<<tentertainment<<endl;
     cout<<"Total Miscellaneous Expenses:"<<tmiscellaneous<<endl;
     cout<<"Total Transportation Expenses:"<<ttransportation<<endl<<endl;
 }
Invoice* search(int new_element)  //Definition & declaration of Search function to find user entered invoice number
{
     Invoice *kp;
    for(kp = beginning; kp != 0; kp = kp->next)
    {
        if(kp->get_InvNo() == new_element)
        {
            return kp;
            break;
        }
    }
 }

void Delete (int obj)  //Definition & declaration of Delete function to delete node or Invoice number;
 {
     Invoice *re;
     re = search(obj);  //call to search function
     if (beginning != 0)
     {
         if(beginning == re)
         {
             beginning = beginning->next;
             delete re;
             cout<<"Invoice has been deleted"<<endl;
         }
         else
         {
             Invoice *lp;
             for(lp = beginning; lp != 0; lp = lp->next )
             {
                 if(lp->next == 0)
                 {
                     cout<<"Entered Invoice is not found"<<endl;
                     break;
                 }

                 else if(lp->next == re)
                 {
                     lp ->next = lp->next->next;
                     delete re;
                     cout<<"Invoice has been deleted"<<endl;
                     break;
                 }
             }
         }
     }
 }
};
int main()
{
    Data list;
    int x,h;
    do
    {
        cout<<"\tENTER [1] TO ADD INVOICES"<<endl;
        cout<<"\tENTER [2] TO DISPLAY DATA"<<endl;
        cout<<"\tENTER [3] TO TOTAL AMOUNT OF EXPENSES PER CATEGORY"<<endl;
        cout<<"\tENTER [4] TO DELETE INVOICE"<<endl;
        cout<<"\tENTER [0] TO EXIT"<<endl;
        cin>>x;
        switch(x)
        {
        case 1:
            {
               list.add();
              break;
            }
        case 2:
            {
                list.display();
                break;
            }
        case 3:
            {
                list.display_c();
                break;
            }
        case 4:
            {
               cout<<"Enter Invoice number to delete:";
               cin>>h;
               list.Delete(h);
                break;
            }
        }

    }while( x != 0 );
    return 0;
}

