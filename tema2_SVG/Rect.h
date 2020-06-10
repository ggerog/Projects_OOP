#pragma once
#include "Figures.h"

///klas naslednik na class Figures Prilojenieto mu e sushtoto kato na class Circle samo che otgovarq za figurata s tag <rect
class Rectangle : public Figures {

public:

	Rectangle(std::string rx, std::string ry, std::string w, std::string h, std::string f);
	Rectangle();

	void read(std::istream& in);
	void save(std::ostream& out);
	void indexSet(size_t i);

	///pozvolqva dostup do chlen funkciite si class Rectangle na naslednicite na class Visitor
	///
	///@param v - ukazatel kum abstrakniq class Visitor
	void accept(Visitor* v);

	size_t indexGet() const;

	std::string getX() { return x; }
	std::string getY() { return y; }
	std::string getW() { return width; }
	std::string getH() { return height; }
	std::string getF() { return fill; }

	void setX(std::string X) { x = X; }
	void setY(std::string Y) { y = Y; }


private:
	///chlen danni na klasa
	///
	///@param x - abcisata na figurata s tag <rect koqto suhranqva 
	///@param y - ordinatata na figurata s tag <rect koqto suhranqva 
	///@param widith - shirinata na figurata s tag <rect koqto suhranqva 
	///@param height - duljinata na figurata s tag <rect koqto suhranqva 
	///@param fill - cveta na figurata s tag <rect koqto suhranqva  
	std::string x, y, width, height, fill;

	size_t index = 0;
};