#include <iostream>
#include <cstdlib>

using namespace std;

int AnimalNumber;
string Species;
float Weight;
float Revenue;
float DailyPrice;
bool Stock;

//Prototypes
void AddAnimal(void);
void DisplayAnimal(int);
void SellAnimal(int);

// Function to add an animal

void AddAnimal(void)
{
	cout << "Please enter the animal number: ";
	cin >> AnimalNumber;
	cout << endl;
	cout << "Please enter the animal species: ";
	cin >> Species;
	cout << endl;
	cout << "Please enter the weight of the animal: ";
	cin >> Weight;
	cout << endl;
	Stock = true; //Animal is still in stock
} ;

// Function to display data

void DisplayAnimal(void)
{
		cout << "Animal number: " << AnimalNumber << endl;
		cout << "Animal species: " << Species << endl;
		cout << "Weight: " << Weight << endl;
		cout << "Still in stock? (1 = yes, 0 = no): " << Stock << endl;
};

// Function to sell an animal

void SellAnimal(int numb)
{
	if(AnimalNumber == numb && Stock == 1)
	{
		cout << "How is the daily price?"<< endl;
		cin >> DailyPrice;
		Revenue = Revenue + (Weight* DailyPrice);
		cout << "Total revenue: " << Revenue << endl;
		Stock = false;
		cout << endl << endl;
	}
	else if (AnimalNumber == numb && Stock == 0)
	{
		cout << "The animal with the number " << numb << " is not in stock." << endl;
	}
	else
	{
		cout << "The animal with the number " << numb << " is not available." << endl;
	}
} ;

int main()
{
int  input, numb; // declares integer s to zero, is used for the menu

cout << "Welcome to the farm administration" << endl << endl << "Please make your selection in the menu...." << endl << endl << endl;

	// do-while loop that outputs the menu and calls submenus
	do
	{



		//The menu
		cout << "[1] Add animal" << endl;
		cout << "[2] Display animal" << endl;
		cout << "[3] Sell animal" << endl;
		cout << "[0] Exit" << endl<<endl;
		cout << "Make a selection: ";

		cin >> input;

		//Switch loop calls the individual menu items
		switch(input)
		{

			case 1:
			{
				system("cls");
				AddAnimal(); // Function to create an animal
				cout << "Animal has been added: " << endl;
				system("pause");
				break;
			}

			case 2:
			{
				system("cls");
				DisplayAnimal();
				system("pause");
				break;
			}

			case 3:
			{
				system("cls");
				cout << "Enter the animal number: " << endl;
				cin >> numb;
				SellAnimal(numb);
				system("pause");
				break;
			}
		}
	}while (input != 0);
	cout << endl << "Good Bye!" << endl;

	system("pause");
	return 0;
};
