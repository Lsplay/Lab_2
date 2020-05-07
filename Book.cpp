#include "Book.h"
#include <iostream>
#include <string.h>

using namespace std;

Book::Book()
{
	CountPage = 0;
}
Book::Book(int Str, string Name, string Aut)
{
	if (Str < 0)
	{
		while (Str < 0)
		{
			cout << "  ERROR-wrong CountPage, INCLUDE ANOTHER -  " << endl;
			int X = 0;
			cin >> X;
			Str = X;
		}
	}
		CountPage = Str;
		Book_Name = Name;
		Author = Aut;
}
Book::Book(const Book& other)
{
	this->CountPage = other.CountPage;
	this->Book_Name = other.Book_Name;
	this->Author = other.Author;
}
int Book::Get_CountPage()
{
    return CountPage;
}
string Book::Get_Book_Name()
{
    return Book_Name;
}
string Book::Get_Author()
{
    return Author;
}
void Book::Set_CountPage(int Str)
{
	if (Str < 0)
	{
		while (Str< 0)
		{
			cout << "  ERROR-wrong CountPage, INCLUDE ANOTHER -  " << endl;
			int X = 0;
			cin >> X;
			Str = X;
		}
	}
		CountPage = Str;

}
void Book::Set_Book_Name(string Name)
{
    Book_Name = Name;
}
void Book::Set_Author(string Aut)
{
    Author = Aut;
}
void Book::Print()
{
	cout << "This Book - " << Book_Name << "  Was writen by - " << Author << " And have " << CountPage << " pages" << endl;
}
Book& Book::operator = (const Book& other)
{
	this->CountPage = other.CountPage;
	this->Book_Name = other.Book_Name;
	this->Author = other.Author;
	return *this;
}
bool Book::operator == (const Book& other)
{
	return this->CountPage == other.CountPage && this->Author == other.Author && this->Book_Name == other.Book_Name;
}
bool Book::operator != (const Book& other)
{
	return !(this->CountPage == other.CountPage && this->Author == other.Author && this->Book_Name == other.Book_Name);
}
bool Book::operator > (const Book& other)
{
	return this->CountPage > other.CountPage ;
}
bool Book::operator >= (const Book& other)
{
	return this->CountPage >= other.CountPage;
}
bool Book::operator < (const Book& other)
{
	return this->CountPage < other.CountPage;
}
bool Book::operator <= (const Book& other)
{
	return this->CountPage <= other.CountPage;
}
Book& Book::operator ++()
{
	this->CountPage++;
	return *this ;
}
Book& Book::operator --()
{
	this->CountPage--;
	return *this;
}
Book& Book::operator ++(int value)
{
	Book Other(*this);
	this->CountPage++;
	return Other;
}
Book& Book::operator --(int value)
{
	Book Other(*this);
	this->CountPage--;
	return Other;
}


