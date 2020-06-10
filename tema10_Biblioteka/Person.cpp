#include "Person.h"

void Person::read(std::istream& in)
{
	std::string temp;

	in >> users;

	in >> temp;

	in >> passwords;

	in >> temp;

	in >> levels;
}

void Person::write(std::ostream& out)
{
	out << "user " << users << "\n";
	out << "password " << passwords << "\n";
	out << "level " << levels << "\n";

}

void Person::print()
{
	std::cout << "user     - " << users << "\n";
	std::cout << "password - " << passwords << "\n";
	std::cout << "level    - " << levels << "\n";

}

Person::Person(std::string name, std::string pass) :users(name), passwords(pass)
{

}

Users* Person::add(std::string name, std::string pass)
{
	Person* newuser = nullptr;
	newuser = new Person(name, pass); /// korekciq izpusnal sum kluchovata duma new

	return newuser; /// korekciq celiq kod e napisan sled predavane na proekta
}






