#include <iostream>

using namespace std;
class Animal
{
    private:
    float Revenue;
    float Weight;
    float DailyPrice;
    public:
        void Request_data()
        {
            cout<<"How is the daily price?"<<endl;
            cin>>DailyPrice;
            cout<<"What is the weight of the animal?"<<endl;
            cin>>Weight;
        }
        void Calculate_revenue()
        {
            Revenue= Weight*DailyPrice;
            cout<<"Revenue: "<<Revenue<<endl;
        }
};

int main()
{
    Animal animals[2];
    animals[0].Request_data();
    animals[0].Calculate_revenue();

    animals[1].Request_data();
    animals[1].Calculate_revenue();

    system("pause");
    return 0;
}
