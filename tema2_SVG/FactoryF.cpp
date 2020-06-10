#include "Circle.h"
#include "Figures.h"
#include "FactoryF.h"
#include "Rect.h"
#include "Ellipse.h"



Figures* makeFig::makefigure(std::string str)
{
	Figures* newFigure = nullptr;

	if (str == "<circle")
		newFigure = new Circle;
	if (str == "<rect")
		newFigure = new Rectangle;
	if (str == "<ellipse")
		newFigure = new Elipse;

	return newFigure;
}


Figures* makeFig::createFigure(std::string name, std::string values)
{
	Figures* newFigure = nullptr;

	std::string* init = new std::string[6];

	if (name == "circle")
	{
		for (size_t j = 0, i = 0; i < values.size(); i++)
		{
			if (values[i] == ' ')
			{
				j++;
			}
			else
			{
				init[j] += values[i];
			}
		}

		newFigure = new Circle(init[0], init[1], init[2], init[3]);

		delete[] init;

		init = nullptr;
	}

	else if (name == "rectangle")
	{
		for (size_t j = 0, i = 0; i < values.size(); i++)
		{
			if (values[i] == ' ')
			{
				j++;
			}
			else
			{
				init[j] += values[i];
			}
		}

		newFigure = new Rectangle(init[0], init[1], init[2], init[3], init[4]);

		delete[] init;

		init = nullptr;
	}

	else if (name == "ellipse")
	{
		for (size_t j = 0, i = 0; i < values.size(); i++)
		{
			if (values[i] == ' ')
			{
				j++;
			}
			else
			{
				init[j] += values[i];
			}

		}

		newFigure = new Elipse(init[0], init[1], init[2], init[3], init[4]);
		delete[] init;
		init = nullptr;
	}

	return newFigure;
}
