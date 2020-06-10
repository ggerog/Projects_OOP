#pragma once
#include "Circle.h"
#include "Rect.h"
#include "Ellipse.h"

///Abstrakten klass Celta na suzdavaneto na tozi virtualen klas e da ne natovarvam ostanalite klasove koito obrabotvat svg fail - class Figures i naslednicite mu i za da vidq dali sum usvoil tazi chast ot OOP-to
class Visitor {

public:
	///predava ukazatel ot obekt na class Circle na svoite naslednici - chiito naslednici imat dostup do chlen funkciite na class Circle
	virtual void proccessCircle(Circle*) = 0;

	///predava ukazatel ot obekt na class Rectangle na svoite naslednici - chiito naslednici imat dostup do chlen funkciite na class Rectangle
	virtual void proccessRectangle(Rectangle*) = 0;

	///predava ukazatel ot obekt na class Elipse na svoite naslednici - chiito naslednici imat dostup do chlen funkciite na class Elipse
	virtual void proccessElipse(Elipse*) = 0;
};