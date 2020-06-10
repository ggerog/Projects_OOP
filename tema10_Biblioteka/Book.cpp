#include "Book.h"
//#include "User.h"

void Book::read(std::istream& in)
{
	std::string temp = ".";
	while (temp != "/n")
	{
		in >> temp;

		while (temp != "t")
		{
			author += temp;
			author += " ";
			in >> temp;
		}

		in >> temp;

		while (temp != "g")
		{
			title += temp;
			title += " ";
			in >> temp;
		}

		in >> temp;

		while (temp != "d")
		{
			genre += temp;
			genre += " ";
			in >> temp;
		}

		in >> temp;

		while (temp != "y")
		{

			desription += temp;
			desription += " ";
			in >> temp;
		}

		in >> temp;
		while (temp != "r")
		{
			yearOfPublish += temp;
			in >> temp;
		}

		in >> temp;

		while (temp != "u")
		{
			rating += temp;
			in >> temp;
		}
		num = 1111;

		temp = "/n";
	}
}

void Book::write(std::ostream& out)
{
	out << "a " << author << "\n";
	out << "t " << title << "\n";
	out << "g " << genre << "\n";
	out << "d " << desription << "\n";
	out << "y " << yearOfPublish << "\n";
	out << "r " << rating << "\n";
}



void Book::all()
{
	std::cout << title << "\n" << author << "\n" << genre << "\n" << num << "\n";
}

/*void Book::accept(Users* u)
{
	u->proccessBook(this);
}*/
