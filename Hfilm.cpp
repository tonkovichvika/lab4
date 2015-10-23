#include "StdAfx.h" 
#include "Hfilm.h"
#include <iostream> 
#include <string>
using namespace std;
Hfilm::Hfilm() : Film()
{

	this->hour= "null";
}
Hfilm::Hfilm (std::string nameHfilm) : Film()

{
	this->hour = nameHfilm;
}

Hfilm::Hfilm (std::string name, std::string nameHfilm) : Film(name)

{
	this->name = name;
	this->hour = nameHfilm;
}
void Hfilm::setHfilm (std::string nameHfilm) 

{
	this->hour = nameHfilm;
	return;
}
void Hfilm::gethour()
{
	std::cout<<hour<<std::endl;
	return;
}
void Hfilm::getname()
{
	std::cout<<name<<std::endl;

}
