#include<iostream>
#include<string>

using namespace std;
int main()
{
string str2 = "I am a string";
string str8(10, '+');
string str4(str2,2,4);
cout<<str8<<endl;
cout<<str4<<endl;
char str[]="this is string";
cout<<str<<endl;
str[9] ='\0';
cout<<str<<endl<<endl;

string str1= "My house";
string str6= str1.substr(3,5);
string str3= str1.erase(1,3);
cout << str6 << endl;
cout << str3 << endl;
string strA="Apple";
string strB="Miss Mar";
string strC= strA.replace(0,2,strB); // Replaces the 0th character and the 2 following characters of string strA
cout << strC << endl <<endl;
string str44="abcd";
cout << str44.length() << endl;
cout << str44.find("d") << endl;

return 0;
}

