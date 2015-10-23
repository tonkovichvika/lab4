#pragma once
#include "Film.h"  
class Hfilm :
	public Film {
	

public:  
		 void gethour();
		 void setHfilm(std::string);
		 void getname();
		 Hfilm();
		 Hfilm (std::string);
		 Hfilm (std::string, std::string);
protected:
	std::string hour;
};
