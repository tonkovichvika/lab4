#pragma once
#include "Programma.h"  
#include <iostream>
class Film :
	public Programm {
protected:
	std::string name_;
public:
	Film();
	Film (std::string);
			
		
		void getname();
		void setname(std::string name);
		void Print();
		static void show(); //статическая ф-ция просмотра списка объектов
		void gethour();
	~Film();
protected:
	std::string name;
	std::string hour;

};
