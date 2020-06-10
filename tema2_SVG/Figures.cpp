#include "Figures.h"
#include "FactoryF.h"


std::istream& operator >> (std::istream& in, std::vector<Figures*>& figures)
{
	size_t index = 0;
	std::string str;
	figures.clear();

	while (in)
	{
		in >> str;

		Figures* newFigure = makeFig::makefigure(str);

		if (newFigure != nullptr)
		{
			newFigure->read(in);
			figures.push_back(newFigure);

			newFigure->indexSet(index);
			index++;
		}
	}

	return in;
}


std::ostream& operator << (std::ostream& in, std::vector<Figures*>& figures)
{
	in << "<?xml version=" << '"' << "1.0" << '"' << " standalone=" << '"' << "no" << '"' << "?>";
	in << '\n';
	in << "<!DOCTYPE svg PUBLIC " << '"' << "-//W3C//DTD SVG 1.1//EN " << '"' << " " << '"' << "http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd" << '"' << '>';
	in << '\n';
	in << "<svg xmlns =" << '"' << "http://www.w3.org/2000/svg" << '"' << "version=" << '"' << "1.1" << '"' << '>';
	in << '\n';

	for (Figures* f : figures)
	{
		f->save(in);
	}

	in << "</svg>";
	return in;
}


std::vector<Figures*> eraseFig(std::vector<Figures*>& figures, size_t index)
{
	std::vector<Figures*> newF;
	size_t i = 0, size = figures.size();

	newF.resize(size - 1);

	//nqkuv aserstion ili exception za index >= size

	for (Figures* f : figures)
	{
		if (f->indexGet() != index)
		{
			newF[i] = f;
			newF[i]->indexSet(i);
			i++;
		}
	}
	figures.clear();
	figures.resize(size - 1);
	return newF;
}


Figures::~Figures() {}