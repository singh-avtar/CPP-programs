#include <iostream>

using namespace std;

class Person
{
private:
    float income;
    string forename;
    string surname;
    int age;
    int code;

    bool checkCode(int secret)
    {
        if(code == secret)
        {
            return true;
        }
        return false;
    }

public:
    //Constructor
    Person() : forename("Bruce"), surname("Willis"), age(62) { };

    Person(string f, string s, int x) : forename (f), surname(s), age(x){}
    void printData()
    {
        cout << "Forename: " << forename << endl;
        cout << "Surname: " << surname << endl;
        cout << "Age: " << age << endl;
        cout<< "Income: "<<getIncome()<<endl;
    }

    void setIncome()
    {
        cout << "What's your income (" << forename << " " << surname << ")? ";
        cin >> income;
    }

    float getIncome()
    {
        return income;
    }
};

int main()
{
    Person pe1; //Call default constructor
    pe1.setIncome();
    pe1.getIncome();
    pe1.printData();
    cout << endl << endl;
    Person pe2 = Person("Logan", "Hugh", 45);
    pe2.setIncome();
    pe2.getIncome();
    pe2.printData();

    return 0;
}
