#include <iostream>

using namespace std;
class Sheep
{
private:
    static int counter;
public:
    Sheep(){counter++;};
    void show()
    {
        cout<<"show number of sheep: "<<counter<<endl;
    }
};
int Sheep::counter=0;

int main()
{
    Sheep s1;
    Sheep s2;
    Sheep s3;
    s1.show();
    return 0;
}
