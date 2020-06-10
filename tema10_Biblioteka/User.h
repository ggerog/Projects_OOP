#pragma once
#include <vector>
#include <string>

#include "Library.h"
#include "Book.h"


/// Abstrakten class Users chiito klasove naslednici suhranqvat dannite za potrebitelite
class Users {

public:
	///chetene ot faila koito suhranqva potrebitelite
	virtual void read(std::istream& in) = 0;

	///pisane vuv faila koito suhranqva potrebitelite
	virtual void write(std::ostream& out) = 0;


	virtual void print() = 0;

	///dobavqne na potrebitel ot potrebitelski vhod za ime i parola
	virtual Users* add(std::string name, std::string pass) = 0;


	///Virtualen destruktor koito izpulnqva purvo destruktura na svoite naslednici posle na sebe si
	virtual ~Users() { };
};

std::istream& operator >> (std::istream& in, std::vector<Users*>& u);
std::ostream& operator << (std::ostream& out, std::vector<Users*> u);