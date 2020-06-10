#pragma once
#include <iostream>
#include <vector>
#include <string>

/// ukazvame che class Visitor shte sushtestvuva nqkude po natatuk v programata za da moje da rabotim s nego vmomenta
///
/// chrez class Visitor otdelqme metodi kato otdelni klasove toest nasladnici na class Visitor i taka da ne otgowarq class Figures za prekaleno mnogo neshta
class Visitor;


/// Abstrakten klas koito zaduljava svoite naslednici da poddurjat funkcii za obrabotka na svg figuri ot svg fail
class Figures {
private:

public:
	/// deklaraciq na virtualna funkciq koqto v ostanalite klasove e zaduljitelna - celta e da moje da se chete informaciq ot veski edin ot naslednicite na class Figures
	virtual void read(std::istream& in) = 0;

	/// deklaraciq na virtualna funkciq, zaduljitelna, zapazva v nov ili sushtiq fail ot koito sa bili procheteni chlen dannite na suotvetnite obekti ot vseki klas
	virtual void save(std::ostream& out) = 0;

	/// podavamsh indesk v reda v koito se sreshtne pri chetene suotvetnata figura ot faila pravi se s cel za da moje posle kato se polzva funkciqta erase da se podade suotvetniq indeks na figurata koqto iskash da iztriesh
	virtual void indexSet(size_t i) = 0;

	/// priemash class Visitor toest vseki naslednik na class Figures shte vurne sebe si kato obekt kato po tozi nachin naslednicite na class Visitor shte imat dostup do chlen funkciite na suotvetniq obekt ot klas koito e naslednik na class Figures
	virtual void accept(Visitor*) = 0;

	/// vrushta indeksa na obekt ot nqkoi ot klasovete naslednici na Figures
	virtual size_t indexGet() const = 0;

	/// iztriva vsichki naslednici na class Figures, t.e im izpulnqva destrukturite purvo na tqh i sled tova na sebe si toest class Figures
	virtual ~Figures();

};

/// predefinirame operatora >> za da moje da procheta figurite ot faila i da gi zapazq vuv vektor ot figuri i sum ukazal referenciq kum figurite zashtoto vseki put kato ima nova figura trqbva da se promenq vectora ot figuri
std::istream& operator >> (std::istream& in, std::vector<Figures*>& figures);

std::ostream& operator << (std::ostream& in, std::vector<Figures*>& figures);

std::vector<Figures*> eraseFig(std::vector<Figures*>& figures, size_t index);

