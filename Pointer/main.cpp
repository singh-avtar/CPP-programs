#include <iostream>

using namespace std;

int main()
{
    int array[] = {4,5,2,6,7,8,};
    int aVariable = array[3];
    int *ptr = &aVariable;


    int x =34, *z;
    z= &x;
    cout<<"Own Address of pointer z: "<<&z<<endl;
    cout<<"value of the variable x: "<<*z<<endl;
    cout<<"Address of variable x: "<<&x<<endl;
    cout<<"Address of variable x stored in z is: "<<z<<endl<<endl<<endl;

    cout<<"Address of first array is: "<<array<<endl;
    cout<<"Address of first array is: "<<&array[0]<<endl;

    cout<<"Value of first array is : " <<*array<<endl;
    cout<<"Value of first array is : " <<array[0]<<endl;
    cout<<"Value of fourth element of array is:"<<*ptr<<endl;
    cout<<"Address of fourth element : "<<ptr<<endl;
        cout<<"Address of pointer : "<<&ptr;



       return 0;
}
