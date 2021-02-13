#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int ;
    *ptr =4;
    cout<<*ptr<<endl;
    int *pntr ;
    cin>>*pntr;
    cout<<*pntr;
}

/*
void printTableFor();
void printTableWhile();
void printTableDoWhile();

int main()
{
	printTableFor();
	cout << endl;
	printTableWhile();
	cout << endl;
	printTableDoWhile();
	return 0;
}

void printTableFor()
{
	int max = 10;
	for(int i = 1; i <= max; i++)
	{
		for(int j = 1; j <= max; j++)
		{
			cout << (i*j) << "\t";
		}
		cout << endl;
	}
}

void printTableWhile()
{
	int max = 10;
	int i = 1, j = 1;
	while(i <= 10)
	{
		while(j <= 10)
		{
			cout << (i*j) << "\t";
			j++;
		}
		j = 1;
		cout << endl;
		i++;
	};
}

void printTableDoWhile()
{
	int max = 10;
	int i = 1, j = 1;
	do
	{
		do
		{
			cout << (i*j) << "\t";
			j++;
		}while(j <= 10);
		j = 1;
		cout << endl;
		i++;
	} while(i <= 10);
	system("pause");
}
*/


