#pragma once
#include "Library.h"

class Library;

///class Book - naslednik na class Library
class Book :public Library {
private:

	///chlen danni na klasa
	///
	///@param author - suhranqva imeto na avtora na knigata
	///@param title - suhranqva imeto na knigata
	///@param genre - suhranqva janra na knigata
	///@param description - suhranqva kratko opisanie na knigata
	///@param yearOfPublish - suhranqva godinata na izdavane na knigata
	///@param rating - suhranqva reitinga na knigata
	///@param num - suhranqva nomera na bibliotekata
	std::string author, title, genre, desription, keywords, yearOfPublish, rating;
	int num;

public:

	///chete ot daden tekstov fail
	///
	///@param in - potoka za vhod ot koito zapisvam dannite za knigite v class Book
	void read(std::istream& in);

	///pisane v daden tekstov fail
	///
	///@param in - potoka za izhod ot koito izprashtam dannite za knigite v class Book
	void write(std::ostream& out);

	//void accept(Users *u);


	void all();
};

