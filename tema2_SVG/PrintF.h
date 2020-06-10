#pragma once
#include "Visitor.h"

///klas naslednik na class Visitor samo printira chlen danni na ekrana ot vektor ot figuri
class PrintF : public Visitor
{
public:
	///printiram chlen funkciite ot obekt ot class Circle
	void proccessCircle(Circle*);
	///printiram chlen funkciite ot obekt ot class Circle
	void proccessRectangle(Rectangle*);
	///printiram chlen funkciite ot obekt ot class Circle
	void proccessElipse(Elipse*);
};