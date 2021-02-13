#include <iostream>
#include <cstdlib>

using namespace std ;

void sort (int*);

int main ()
{
int a [10], i;

cout << "Unsorted Array : " << endl;
for (i=0; i<10; i++)
{
	a [i]= rand()%100;
	cout << a [i] << " ";
}

cout << endl<<a<<endl;
       sort(a);
cout << "Sorted Array : " << endl;
for (i=0; i<10; i++)
	cout << a [i] << " ";

cout << endl;

system("pause");
return 0;
}

void sort(int *x)
{
int i, deposit, change ;

do
{
	change =0;
	for ( i =0; i <9; i ++)
		if ( x [i] > x [i+1])
		{
			deposit = x [i];
			x [i]= x [i+1];
			x [i+1] = deposit ;
			change = 2;
		}
}
while (change);
}
