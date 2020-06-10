#pragma once
#include "Visitor.h"

/// klas naslednik na class Visitor
class TranslateF : public Visitor
{
private:

	///chlen danni
	///
	///@param x - abcisata koqto potrebitelq podava
	///@param y - ordinatata koqto potrebitelq podava
	int x, y;

public:

	///konstruktor 
	///
	///v main funkciqta mi trqbvash konstruktor s koito da inicializiram chlen promenlivite na class TranslateF
	TranslateF(int x, int y);

	///proccessCircle priema ukazatel ot obekt ot class Circle 
	///
	///samiq vektor ot figuri translira tochno tozi obekt koito ukazatelq sochi vuv vektora, toest promenq stoinostite na abcisata i ordinatata na Circle
	///
	///@param c - ukazatel ot obekt ot class Circle
	void proccessCircle(Circle* c);

	///proccessRectangle priema ukazatel ot obekt ot class Rectangle
	///
	///samiq vektor ot figuri translira tochno tozi obekt koito ukazatelq sochi vuv vektora, toest promenq stoinostite na abcisata i ordinatata na Rectangle
	///
	///@param r - ukazatel ot obekt ot class Rectangle
	void proccessRectangle(Rectangle* r);

	///proccessElipse priema ukazatel ot obekt ot class Elipse 
	///
	///samiq vektor ot figuri translira tochno tozi obekt koito ukazatelq sochi vuv vektora, toest promenq stoinostite na abcisata i ordinatata na Elipse
	///
	///@param e - ukazatel ot obekt ot class Rectangle
	void proccessElipse(Elipse* e);
};