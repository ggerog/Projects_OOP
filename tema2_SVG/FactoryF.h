#pragma once
#pragma once
#include "Figures.h"
#include <string>

/// Pomoshten klas chiqto cel e da suzdade obekti ot class Circle , class Rectangle, class Elipse
class makeFig {

public:

	/// vrushta ukazatel ot class Figures koito biva ili class Circle ili class Rectangle ili class Ellipse na bazata na podaden string chrez koito opredelqsh dali da se suzdade obekt ot edin tezi klasove ili da se vurne kato rezultat nullptr
	///
	/// pravi se s cel tui kato vseki klas naslednik na class Figures shte zaema razlichno mqsto i e neobhodimo da se zadeli purvo obekt
	///
	///@param str tove e stringa koito ukazva kakuv tip shte bude noviq obekt
	static Figures* makefigure(std::string str);


	///prilojenito e shushtoto kato makefigure s edno dopulnenie che se pridava na funk kato arg dva stringa purviq e: 
	///
	///kato inicializiraneto na obektite chrez val - stoinostite koito potrebitelq e dal, stava chrez konstrukturi
	///
	/// @param name koito ukazva kakuv tip shte e noviq obekt koito shte se vurne kato rezultat
	/// @param val koito suhranqva stoinostite na suotvetnite chlen danni na suotvetniq obekt
	static Figures* createFigure(std::string name, std::string val);


};