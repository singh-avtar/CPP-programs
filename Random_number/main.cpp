#include <iostream>
#include <cstdlib> //c standard library
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); //seed random
    for(int x=1; x<25; x++)
    {
        cout<<x<<" "<<1+(rand()%6)<<endl;
    }
    return 0;
}
