#pragma once
#include "Figures.h"


/// naslednik na class Figures
class Circle : public Figures {
public:

	///konstruktor glavno go suzdadoh zaradi funciqta createFigure 
	///
	///@param x ukazva abciasata na kruga
	///@param y ukazva ordinatata na kruga
	///@param er ukazva radiusa na kruga
	///@param color ukazva cveta na kruga
	Circle(std::string x, std::string y, std::string er, std::string color);

	///prazen konstructor
	///
	///sled kato suzdadoh konstruktor koito inicializira promenlivite v nachaloto na deklaraciqta mi trqbvashe i takuv koito da ne me zaduljava da pravq tova
	Circle();


	/// chete specialno parametrite ot potok
	///
	/// chete tezi parametri koito suotvetstvat na taga <circle ... /> tova sa cx,cy-centura na kruga, r-radiusa, fill - cveta s koito e zapulnen kruga
	void read(std::istream& in);

	/// zapazva suhranenite chlen danni v nov ili v sushtiq svg fail ot koito sa bili prosheteni
	///
	///vurti se prosto edin cikul ot Figures* f: figures i na vsqlka iteraciq ukazvash f->save(out) out-potoka na izhod
	void save(std::ostream& out);

	/// zadava indeksa v reda na sreshtaneto si kogato se zapisva informaciqta ot cheteneto na svg fail
	///
	/// cel trqbva mi indeksa za da moga da gi iztriq posle i transliram sushto
	void indexSet(size_t i);

	///priema drug class Visito - abstrakten klas
	///
	///pod priema znach che se predava kato obekt , t.e chrez funkciq vuv vizitor koqto e virtualna tq priema kato arg obekt ot krug ili pravougulnik ili elipsa- toest ti podavash dostup do naslednicite na Visitor da mogat da boravqt s class Circle
	void accept(Visitor* v);

	///vrushta indeksa na obekta 
	size_t indexGet() const;

	///vrushta chlen dannata cx
	std::string getCx() { return cx; }

	///vrushta chlen dannata cy
	std::string getCy() { return cy; }

	///vrushta chlen dannata r
	std::string getR() { return r; }

	///vrushta chlen dannata fill
	std::string getF() { return fill; }

	///inicializira chlen dannata cx
	void setCx(std::string x) { cx = x; }

	///inicializira chlen dannata cy
	void setCy(std::string y) { cy = y; }

private:
	///chlen danni na class Circle
	///
	///@param cx - ot <circle se chete atributa koito e abcisata na kruga i se sapazva v cx
	///@param cy - ot <circle se chete atributa koito e ordinata na kruga i se sapazva v cy
	///@param r - ot <circle se chete atributa koito e radiusa na kruga i se sapazva v r
	///@param fill - ot <circle se chete atributa koito e cveta na kruga i se sapazva vuv fill

	std::string cx, cy, r, fill;

	///@param index - zapazva se indeksa po reda na sreshtaneto na edin ot tagovete na <circle, <rect, <ellipse
	size_t index = 0;

};
