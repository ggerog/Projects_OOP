#include "User.h" 
#include "Person.h"

std::istream& operator >> (std::istream& in, std::vector<Users*>& u)
{
	std::string str;
	u.clear();

	while (in)
	{
		in >> str;
		Users* newuser = nullptr;
		if (str == "user")
		{
			newuser = new Person;
			newuser->read(in);
			u.push_back(newuser);
		}
	}

	return in;
}

std::ostream& operator << (std::ostream& out, std::vector<Users*> u)
{
	for (Users* user : u)
	{
		user->write(out);
	}
	return out;
}

