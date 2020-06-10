#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "Library.h"
#include "Book.h"
#include "User.h"
#include "Person.h"

int main()
{
	std::fstream books;
	std::fstream users;
	std::string command;
	std::string name = "library.txt";

	std::vector<Users*> user;
	Users* first = new Person;

	user.push_back(first);

	std::vector<Library*> library;


	while (command != "exit")
	{
		std::cin >> command;

		if (command == "open")
		{
			if (books.is_open())
			{
				std::cout << "File is already opened! \n";
			}
			else
			{

				books.open("library.txt", std::ios::in || std::ios::out);

				if (books.good())
				{

					std::cout << "Successfully loaded " << name << " file \n";

					books >> library;

					books.close();

					users.open("users.txt");

					if (users.good())
					{
						std::cout << "Good !\n";
						users >> user;
						users.close();
					}
					else
					{
						std::cout << "There is something wrong with the users file! \n";
						return 0;
					}
				}
				else
				{
					std::cout << "The file is corrupted or not in the right format \n";
					return 0;
				}
			}
		}

		if (command == "save")
		{
			books.open(name);
			books << library;
			std::cout << "File successfully saved in " << name << " file ! \n";
			books.close();
		}

		if (command == "saveas")
		{
			std::cin >> name;
			books.open(name);
			books << library;
			std::cout << "File successfully saved as " << name << " file ! \n";
			books.close();
		}
		if (command == "close")
		{
			books.close();
			std::cout << "Successfully closed without saving! \n";
		}
		if (command == "books")
		{
			std::string str;

			getline(std::cin, str);
			if (str == "all")
			{
				for (Library* l : library)
					l->all();

				std::cout << "Successfully printed! \n";
			}

		}

		if (command == "users")
		{
			std::string str;
			std::cin >> str;

			if (str == "add")
			{

				std::string uname, upass;
				std::cin >> str;
				Person p;                                                ///korekciq sled predavaneto na proekta ne trqbva da ima ukazate;
				user.resize(user.size() + 1);
				user.push_back(p.add(uname, upass));					///korekciq sled predavaneto na proekta veche shtom ne e ukazatel nqma smisul ot dereferenciirane

				users.open("users.txt");
				users << user;
				users.close();
			}

			if (str == "remove")
			{
				std::string name;
				std::cin >> name;


				std::cout << "Removed " << name << " user! \n";
			}
		}

		if (command == "exit")
		{
			std::cout << "Closing the program.. \n";
			return 0;
		}
	}


}