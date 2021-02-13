#include <iostream>

using namespace std;

int main()
{
    float var1, var2,Result;
    char op;
    cout<<"2 number with operator in between[+ - * /]: ";
    cin>>var1>>op>>var2;
    cout<<var1<<op<<var2<<"=";
        switch(op){
        case'+':
            Result=var1+var2;
            cout<<Result<<endl;
            break;
        case'-':
            cout<<var1-var2<<endl;
            break;
        case'*':
            cout<<var1*var2<<endl;
            break;
        case'/':
            if(var2==0)
                cout<<"Division by 0 is not possible"<<endl;
            else
                cout<<var1/var2<<endl;
            break;
        default:
            cout<<"I don't know this operator"<<endl;
        }
    return 0;
}
