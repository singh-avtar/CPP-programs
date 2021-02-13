#include <iostream>
#include <cstdlib>
#include <map>
#include <iterator>
#include <string>
#include <cctype>
#include <stdlib.h>
using namespace std;
class invoice
{
friend class invoicelist;
private :
    int number;
    int month;
    map<string,float> expenses;
    invoice *successor;
public :
    invoice (){successor=NULL;}
    invoice (int n, int m, map<string,float> expmap): number (n),month (m), expenses(expmap)
    {
        //successor=NULL;
    }

};

class invoicelist{
private :
    invoice *head;
    invoice *tail;
	int invoicenumber=0;
public :
    invoicelist(){head=tail=NULL;}
	//invoice inv;
	invoice cat(invoice inv){
		string category_cat;
		float amount;
		map<string, float>::iterator it;
	cout << " Enter category : "<<endl;
		cin >> category_cat;

		char cat;
		for (char &cat: category_cat)
		{
			cat = tolower(cat);
		}
        while( category_cat != "food" && category_cat != "clothing" && category_cat != "fuel" && category_cat != "holidays" &&
			   category_cat != "footwear" && category_cat != "cosmetics" && category_cat != "medical" && category_cat != "others")
        {
			cout << " Enter valid category : "<<endl;
            cin >> category_cat;

        }

		cout << "Enter amount";
            cin >> amount;
			it = inv.expenses.find(category_cat);
        if(it == inv.expenses.end()){
            inv.expenses.insert(pair<string, float>(category_cat, amount));

    cout << endl;
	}
	else{
		it = inv.expenses.find(category_cat);
		float amount_exist=it->second;
		inv.expenses.erase(category_cat);
		inv.expenses.insert(pair<string, float>(category_cat, amount+amount_exist));

    }

		return inv;
	}

void add()
	{
		invoice inv;
        string category;
		invoicenumber +=1;
		inv.number=invoicenumber;
		cout << " Enter Month in the range of [1,12] : ";
		cin >> inv.month;
		while (inv.month <=1 || inv.month >= 12)
		{
			cout << "Enter a valid month" << endl;
			cout << " Enter Month in the range of [1,12] : ";
			cin >> inv.month;
		}
	char choice;
	do{
	cout << "1. Enter a category!!"<< endl;
	cout << "0. Exit"<< endl;
	cin >> choice;
	switch (choice)
        {
        case '0' :
            {
                system("cls");
                break;
            }
        case '1' :
            {

                system("cls");
                inv=cat(inv);
                system("pause");
                break;
            }
		default : // Incorrect input
            {
                system("cls");
                cerr << "Incorrect input" << endl;
                system("pause");
               break;
            }
		}

		}while(choice!='0');


		map<string, float>::iterator itr1;
		for (itr1 = inv.expenses.begin(); itr1 != inv.expenses.end(); ++itr1) {
        cout << '\t' << itr1->first
             << '\t' << ':' << itr1->second << '\n';
		}

		invoice *newListElement = new invoice(inv);

		// list is empty
		if(isEmpty()){
			tail = head = newListElement;
		cout << "Entered ISEMpty";
		}
		else
		{
			cout << "Not empty";
			// the last element points to the new element
			tail->successor = newListElement;

			// the new element becomes the last element
			tail = newListElement;

			// the successor of the end is NULL
			tail->successor = NULL;
		}
	}

	// checks if list is empty
	bool isEmpty()
	{
		return (head == NULL) ? true : false;
	}

	// Displays all elements of the list
	void displayAll()
	{
		map <int,string> months_map;
		months_map={{1,"January"},{2,"February"},{3,"March"},{4,"April"},{5,"May"},{6,"June"},{7,"July"},{8,"August"},{9,"September"},{10,"October"},{11,"November"},{12,"December"}};
		invoice *p = head;
		invoice *current;
		invoice *last = NULL;
		int ordered = 0;
		do
		{
		    ordered=0;
			current = p;
			while(current->successor != last)
			{
				if(current->month > current->successor->month)
				{
					int temp_number = current->number;
					int temp_month = current->month;
					map <string,float> temp_expenses= current->expenses;
					current->number=current->successor->number;
					current->month=current->successor->month;
					current->expenses=current->successor->expenses;
					current->successor->number=temp_number;
					current->successor->month=temp_month;
					current->successor->expenses=temp_expenses;
					ordered=1;
				}
				current=current->successor;
			}
		}while(ordered);
		//invoicelist->head = *p
		//cout << p->successor;
		while(p != NULL)
		{
			map<string, float>::iterator itr;
			float total_amount=0;
			for (itr = p->expenses.begin(); itr != p->expenses.end(); ++itr) {
				total_amount= total_amount + itr->second;
			}
			if(total_amount>500){
				cout << "Spent more than planned!!!" << '\n';
			}
			cout << "Invoice Number: " << p->number << endl;
			cout << months_map[p->month] << " Expenses: " <<endl;
			cout << "--------------------------------" << endl;
			map<string, float>::iterator itr1;
			for (itr1 = p->expenses.begin(); itr1 != p->expenses.end(); ++itr1) {
			cout << '\t' << itr1->first
			<< '\t' << ':' << itr1->second << '\n';}
			cout << '\t' << "Total: " << total_amount <<endl <<endl;
			p = p->successor;



	}

	}

	void displayCategory()
	{
	    invoice *d = head;
	    float food=0, clothing=0, fuel=0, holidays=0, footwear=0, cosmetics=0, medical=0, others=0;
		int count=0;
		map<string, float>::iterator itr;
		map<string,float> category_exp;
		// as long as the node is not null, in other words, the end is not reached...
		while(d != NULL)
		{

				map<string, float>::iterator it;

				it = d->expenses.find("food");
				if(it != d->expenses.end()){
					food+=d->expenses["food"];
				}

				it = d->expenses.find("clothing");
				if(it != d->expenses.end()){
					clothing+= d->expenses["clothing"];
				}

				it = d->expenses.find("fuel");
				if(it != d->expenses.end()){
					fuel+=d->expenses["fuel"];
				}

				it = d->expenses.find("holidays");
				if(it != d->expenses.end()){
					holidays+= d->expenses["holidays"];
				}

				it = d->expenses.find("footwear");
				if(it != d->expenses.end()){
					footwear+=d->expenses["footwear"];
				}

				it = d->expenses.find("cosmetics");
				if(it != d->expenses.end()){
					cosmetics+= d->expenses["cosmetics"];
				}

				it = d->expenses.find("medical");
				if(it != d->expenses.end()){
					medical+=d->expenses["medical"];
				}

				it = d->expenses.find("others");
				if(it != d->expenses.end()){
					others+= d->expenses["others"];
				}

			d = d->successor;
		}

		category_exp.insert(pair<string, float>("food", food));
		category_exp.insert(pair<string, float>("clothing", clothing));
		category_exp.insert(pair<string, float>("fuel", fuel));
		category_exp.insert(pair<string, float>("holidays", holidays));
		category_exp.insert(pair<string, float>("footwear", footwear));
		category_exp.insert(pair<string, float>("cosmetics", cosmetics));
		category_exp.insert(pair<string, float>("medical", medical));
		category_exp.insert(pair<string, float>("others", others));

		map<string, float>::iterator itr1;
			for (itr1 = category_exp.begin(); itr1 != category_exp.end(); ++itr1) {
			cout << '\t' << itr1->first
				 << '\t' << ':' << itr1->second << '\n';
	}
	}

	void clear()
	{
		if(isEmpty())
			return;

        invoice *penultimatElement = head;
			if (penultimatElement != NULL)
            {
                cout << penultimatElement->number << "removed"<<endl;
                head=penultimatElement->successor;
                penultimatElement->successor = NULL;
                delete penultimatElement;
            }

	}

	void Delete()
	{
		int invoiceinput;
		invoice *deletenode = head;
		invoice *prevnode;
		if(isEmpty())
		{
			cout << "No invoices found to delete" <<endl;
			return;
		}
		cout << "Input invoice number to be deleted: " <<endl;
		cin >> invoiceinput;

		if ( deletenode != NULL && deletenode->number == invoiceinput)
		{
			if (deletenode->successor != NULL )
				head = deletenode->successor;
			else
				head = NULL;
			free(deletenode);
			cout << "deleted invoice of the month " << deletenode->month <<endl;
			return;
		}
		while( deletenode != NULL && deletenode->number != invoiceinput)
		{
			prevnode = deletenode;
			deletenode = deletenode->successor;
		}
		if(deletenode == NULL)
			cout << "Invoice number is not found";
		else
		{
			prevnode->successor = deletenode->successor;
			cout << "deleted invoice of the month " << deletenode->month <<endl;
		    free(deletenode);
		}
	}


};


int main()
{
    int selection;

    invoicelist expense;

    do
    {
        system("cls");
        cout << "Manage Expenses" << endl;
        cout << "Menu"<< endl;
        cout << "1. Enter an invoice"<< endl;
        cout << "2. display"<<endl;
        cout << "3. total amount by category"<<endl;
        cout << "4. delete"<< endl;
        cout << "5. clear"<< endl;
        cout << "0. Exit"<<endl;
        cout << "Your selection: ";
        cin >> selection;

        switch (selection)
        {
        case 0 :
            {
                system("cls");
                cout << "Goodbye!" << endl;
                break;
            }
        case 1 :
            {

                system("cls");
                expense.add();
                system("pause");
                break;
            }
        case 2:
            {
                system("cls");
                if(!expense.isEmpty())
                    {
	            		expense.displayAll();
					}
                else
					{
					    cout << "List is empty." << endl;
					}
				system("pause");
				break;
            }

        case 3:
            {
                system("cls");
                if(!expense.isEmpty())
                    {
	            		expense.displayCategory();
					}
					else
					{
					    cout << "List is empty." << endl;
					}
				system("pause");
				break;
            }
        case 4 :
            {
                system("cls");
                if(!expense.isEmpty())
                {
                    expense.Delete();
                }
                else
                {
                    cout << "List is empty." << endl;
                }
                system("pause");
                break;
             }
        case 5 :
            {
                system("cls");
                while(!expense.isEmpty())
                {
                    expense.clear();
                }
                cout << "List is empty." << endl;

                system("pause");
                break;
            }
        default : // Incorrect input
            {
                system("cls");
                cerr << "Incorrect input" << endl;
                system("pause");
                break;
            }

    }
}while (selection != 0);

    return 0;
}



