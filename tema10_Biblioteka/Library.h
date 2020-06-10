#pragma once
#include <string>
#include <vector>
#include <iostream>

class Users;

/// Abstrakten class Library
class Library {
public:

	/// funkciq koqto zaduljava vsichki naslednici na class Library da q pritejavat
	virtual void all() = 0;

	/// funkciq koqto zaduljava vsichki naslednici na class Library da q pritejavat
	///
	/// @param in - potok za vhod 
	virtual void read(std::istream& in) = 0;


	/// funkciq koqto zaduljava vsichki naslednici na class Library da q pritejavat
	///
	/// @param in - potok za izhod 
	virtual void write(std::ostream& out) = 0;

	///Virtualen destructor koito vika destruktura na svoite naslednici i posle na sebe si t.e ako imame vector ot ukazateli ot tip Library to vsichi elementi v obekta koito sa drugi klasove nasednici i sledovatelno purvo na tqh shte im se izpulni destruktura
	virtual ~Library() {};
};


std::istream& operator >> (std::istream& in, std::vector<Library*>& L);
std::ostream& operator << (std::ostream& out, std::vector<Library*> L);