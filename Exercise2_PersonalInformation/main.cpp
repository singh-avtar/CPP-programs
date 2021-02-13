#include <iostream>
#include <cstdlib>

using namespace std;

class Animal
{
public:
	float Number;
	float Weight;

	void displaydata()
	{
		cout <<"There are "<<Number << " animals with " <<Weight <<" kg each available"<<endl;
	}
};
class SlaughterCattle : public Animal
{
   public:
    SlaughterCattle () { Weight = 3.48; }
};
class DairyCattle : public Animal
{
private:
    float milkyield;
public:
    DairyCattle () { milkyield = 7.84; }
};

int main()
{
	Animal Pig;
	Pig.Number=50;
	Pig.Weight=20;
	Pig.displaydata();
	SlaughterCattle s1;
	s1.displaydata();

	system("PAUSE");
	return 0;
};
