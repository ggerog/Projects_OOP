#pragma once
#include "Figures.h"


class Elipse : public Figures {
public:

	Elipse(std::string x, std::string y, std::string ex, std::string ey, std::string color);
	Elipse();

	void read(std::istream& in);
	void save(std::ostream& out);

	void indexSet(size_t i);
	void accept(Visitor* v);

	size_t indexGet() const;


	std::string getCx() { return cx; }
	std::string getCy() { return cy; }
	std::string getRx() { return rx; }
	std::string getRy() { return ry; }
	std::string getF() { return fill; }

	void setCx(std::string X) { cx = X; }
	void setCy(std::string y) { cy = y; }


private:
	std::string cx, cy, rx, ry, fill;

	size_t index = 0;
};
