#include "Library.h"
#include "Book.h"

std::istream& operator >> (std::istream& in, std::vector<Library*>& library)
{
	std::string str;
	library.clear();

	while (in)
	{
		in >> str;
		Library* newbook = nullptr;
		if (str == "a")
		{
			newbook = new Book;

			newbook->read(in);

			library.push_back(newbook);
		}

	}
	return in;
}

std::ostream& operator << (std::ostream& out, std::vector<Library*> L)
{
	for (Library* l : L)
	{
		l->write(out);
	}

	return out;
}