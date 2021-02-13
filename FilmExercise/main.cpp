#include <iostream>
#include <cstdlib>

using namespace std;

// Film as data structure
class Film
{
friend class FilmList;

private:
    string title;
    unsigned int year;
    string genre;
    Film *successor;
public:
	Film() {}
	Film(string t, int y, string g) : title(t), year(y), genre(g) {}
};

// Basic structure
class FilmList
{
	// Head
	Film *head;

	// Tail
	Film *tail;

public:

	// FilmList
	FilmList()
	{
		head = tail = NULL;
	}

	// Destructor
	~FilmList()
	{
		cout << "List deleted" << endl;
	}

	// add a movie to the list
	void add(Film film)
	{
		// Create a new list element and initialize as "film"
		Film *newListElement = new Film(film);

		// list is empty
		if(isEmpty())
			tail = head = newListElement;
		else
		{
			// the last element points to the new element
			tail->successor = newListElement;

			// the new element becomes the last element
			tail = newListElement;

			// the successor of the end is NULL
			tail->successor = NULL;
		}
	}

	// checks if list is empty
	bool isEmpty()
	{
		return (head == NULL) ? true : false;
	}


	// Delete list
	void delete()
	{
		if(isEmpty())
			return;

		// as long as the pointer is not null, i.e. elements are still existing in the list...
		while(head->successor != NULL)
		{
			// ...search for the penultimate ELement
			Film *penultimatElement = head;
			while(penultimatElement->successor != ende)
			{
				penultimatElement = penultimatElement->successor;
			}

			// Delete the last element
			delete ende;

			// the penultimate element becomes the last element
			penultimatElement->successor = NULL;
			ende = penultimatElement;
		}

		// finally delete the list header
		delete head;
	}

	// Displays all elements of the list
	void displayElements()
	{
		// actual node
		Film *p = head;

		// as long as the node is not null, in other words, the end is not reached...
		while(p != NULL)
		{
			// É Output content of the list
			cout << "Title: "<< p->title
				<< "\tYear: " << p->year
				<< "\tGenre: " << p->genre << endl;

			// The successor becomes the current node
			p = p->successor;
		}
	}
};

int main()
{
	// Examples
	Film film1("Star Wars",1977,"Science fiction"), film2("Iron Man 3",2013,"Action"), film3("Toy Story",1995,"Animation");

	FilmList film;
	film.add(film1);
	film.add(film2);
	film.add(film3);


	film.displayElements();

	film.delete();

	system("pause");

	return 0;
}
