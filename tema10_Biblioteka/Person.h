#pragma once
#include "User.h"

///
class Person :public Users {
private:
	std::string users = "admin";
	std::string passwords = "i<3c++";
	std::string levels = "0";

public:
	Person(std::string name, std::string pass);
	Person() {}
	void read(std::istream& in);
	void write(std::ostream& out);
	Users* add(std::string name, std::string pass);
	void print();
};
