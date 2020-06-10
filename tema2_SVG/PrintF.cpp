#include "PrintF.h"

void PrintF::proccessCircle(Circle* c)
{
	std::cout << c->indexGet() << " " << c->getCx() << " " << c->getCy() << " " << c->getR() << " " << c->getF() << "\n";
}

void PrintF::proccessRectangle(Rectangle* r)
{
	std::cout << r->indexGet() << " " << r->getX() << " " << r->getY() << " " << r->getW() << " " << r->getH() << " " << r->getF() << "\n";
}

void PrintF::proccessElipse(Elipse* e)
{
	std::cout << e->indexGet() << " " << e->getCx() << " " << e->getCy() << " " << e->getRx() << " " << e->getRy() << " " << e->getF() << "\n";
}