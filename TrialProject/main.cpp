#include <iostream>

using namespace std;
struct node
{
    int info;
    string name;
    node *next;
};
class LinkedList
{
    node *start;
public:
    LinkedList() { start = NULL; }

    void create ()
    {
        node *ptr = new node;
        int x;
        string n;
        cout<<"Enter number : ";
        cin>>x;
        cout<<"Enter name : ";
        cin>>n;
        ptr->info = x;
        ptr->name = n;
        ptr->next = start;
        start = ptr;
    }
    void createLast ()
    {
        node *t;
        node *p = new node;
         int x;
        string n;
        cout<<"Enter number : ";
        cin>>x;
        cout<<"Enter name : ";
        cin>>n;
        p->info=x;
        p->name=n;

        p->next = NULL;

        if(start==NULL)
            start = p;
         else{
            t=start;
            while(t->next != NULL)
                t=t->next;
            t->next = p;
        }

    }
    void display()
    {
        node *tmp = start;
        while (tmp != NULL)
        {
            cout<<tmp->info<<"\t"<<tmp->name<<endl;
            tmp= tmp->next;
        }
    }
    ~LinkedList ()
    {
        node * tmp = start;
        cout<<"-Destroyed-"<<endl;
        while(tmp != NULL)
        {
            tmp = tmp->next;
            delete start;
            start = tmp;
        }
    }
};


int main()
{
    LinkedList l1;
    int i;
    do
    {
        cout<<"Insert Node at Start [1] "<<endl;
        cout<<"Insert Node at Last [2] "<<endl;
        cout<<"Display Node [3] "<<endl;
        cout<<"Exit [0] "<<endl;
        cin>>i;
        switch(i)
        {
        case 1:
            {
                system("cls");
                l1.create();
                break;
            }
        case 2:
            {
                system("cls");
                l1.createLast();
                break;
            }
        case 3:
            {
                system("cls");
                l1.display();
                break;
            }
        }
    }while(i != 0);


    return 0;
}
