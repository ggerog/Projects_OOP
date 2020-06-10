#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "Figures.h"
#include "FactoryF.h"
#include "Circle.h"
#include "Rect.h"
#include "Ellipse.h"
#include "PrintF.h"
#include "Visitor.h"
#include "TranslateF.h"

int main()
{
	std::string command, name;
	std::vector<Figures*> figures;

	std::fstream file;

	while (command != "exit")
	{
		std::cin >> command;

		if (command == "open")
		{
			if (file.is_open())
			{
				std::cout << "A " << name << " file has already been opened! \n";
			}
			else
			{
				std::cin >> name;

				file.open(name);
				size_t i = name.size();

				if (file.tellg() == -1)
				{
					if (name[i - 3] == 's' && name[i - 2] == 'v' && name[i - 1] == 'g')
					{
						file.close();
						file.open(name, std::ios::out);
						std::cout << "Successfully opened " << name << " file! \n";
					}
					else
					{
						std::cout << "The file is corrupted or not in the right format!";
						return 0;
					}
				}
				else if (file.good() && name[i - 3] == 's' && name[i - 2] == 'v' && name[i - 1] == 'g')
				{

					file >> figures;

					std::cout << "Successfully opened " << name << " file! \n";
				}
				else
				{
					std::cout << "The file is corrupted or not in the right format!";
					return 0;
				}

			}

		}

		if (command == "print")
		{
			PrintF print;

			for (Figures* f : figures)
			{
				f->accept(&print);
			}

			std::cout << "Successfully printed! \n";
		}


		if (command == "save")
		{
			file.close();

			file.open(name);
			file.clear();

			file << figures;

			std::cout << "Successfully saved in " << name << " file! \n";
		}

		if (command == "saveas")
		{
			file.close();

			std::cin >> name;

			file.open(name, std::ios::out);

			file << figures;

			std::cout << "Successfully saved in " << name << " file \n";
		}

		if (command == "close")
		{
			file.close();
			figures.clear();
			std::cout << "Closing " << name << " file! \n";
		}

		if (command == "exit")
		{
			std::cout << "Exititng the program..";
			return 0;
		}

		if (command == "create")
		{
			std::string figure;
			std::string values;

			std::cin >> figure;
			if (figure == "circle" || figure == "rectangle" || figure == "ellipse")
			{
				std::cin.ignore();

				getline(std::cin, values);

				figures.push_back((makeFig::createFigure(figure, values)));

				figures[figures.size() - 1]->indexSet(figures.size() - 1);

				std::cout << "Successfully created figure! \n";
			}
			else
			{
				std::cout << "Incorrect name of the figure that is maintained! \n";
			}

		}


		if (command == "erase")
		{
			size_t index = 0, i = 0;
			std::cin >> index;

			figures = eraseFig(figures, index);
			std::cout << "Successfully erase figure number:" << index << "\n";

		}

		if (command == "translate")
		{
			std::string input;
			int x, y, n, pass = 0;
			std::cout << "Enter number the figure you want to translate or press enter to translate all: ";
			if (!std::cin.fail())
			{
				std::cin >> n;
				pass += 1;
			}
			std::cout << "Vertical = ";
			std::cin >> y;

			std::cout << "Horizontal = ";
			std::cin >> x;

			TranslateF translate(x, y);

			if (pass != 0)
			{
				for (Figures* f : figures)
				{
					if (f->indexGet() == n)
						f->accept(&translate);
				}
			}
			else
			{
				for (Figures* f : figures)
					f->accept(&translate);
			}


			std::cout << "Successfully translated ! \n";
		}

		if (command == "help")
		{
			std::cout << "open      - opens a users typed .svg file! \n";
			std::cout << "save      - saves the changes that you have applied to the same file you have opened! \n";
			std::cout << "saveas    - saves the changes that you have applied to an other .svg file that is given by the user! \n";
			std::cout << "close     - closes the opened file without saving the changes! \n";
			std::cout << "create    - creates a figure by a correctly given name and arguments! \n";
			std::cout << "erase     - erase a figure by a given index that indicates the figure \n";
			std::cout << "translate - translates a figure by given index and arguments or without index to translate all figures! \n";
			std::cout << "help      - gives information about the commands in this application! \n";
			std::cout << "exit      - exits the program! \n";
		}


	}





}