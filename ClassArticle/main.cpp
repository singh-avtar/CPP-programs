#include <iostream>

using namespace std;
class Article
{
    private:
    string name;
    float price;

    public:
        /*
    string get_name()
    {
        return name;
    }
    float get_price()
    {
        return price;
    }
    */
    void set_name()
    {
        cout<<"Enter the name of article: ";
        cin>>name;
    }
    void set_price()
    {
        cout<<"Enter the price of article: ";
        cin>>price;
    }
    void show_data()
    {
        cout<<"The article "<<name<<" costs " <<price<<" Euro. "<<endl;
    }
    void enter_data()
    {
        set_name();
        set_price();
    }
    void calculate_totalPrice(int quant)
    {
        cout<<"Total price: "<<quant*price<<endl;
    }
};


int main()
{
    int quantity;
    Article a1;
    a1.enter_data();
    a1.show_data();
    cout<<"Enter a quantity: ";
    cin>>quantity;
    a1.calculate_totalPrice(quantity);
    cout<<endl<<endl;

    return 0;
}
