#pragma once  
#include <iostream>
using namespace std;
class Programm {
protected:
	static Programm*head; //статическая компонента

public:
	Programm *next;
		
	virtual void gethour()=0;
	virtual void getname()=0;
	virtual void Print()=0;
	
};
