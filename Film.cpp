#include "StdAfx.h" 
#include "Film.h"
#include <iostream> 
#include <string>
using namespace std;
Film::Film() {

	this->name_="";
}
 Film::Film(std::string name)

{
	this->name_ = name;
}

void Film::getname()

{
	std::cout<<this->name_<<std::endl;
	return;
}  

Film::~Film()
{
}
void Film::gethour()
	{
	std::cout<<this->hour<<std::endl;
	return;
}  
void Film::setname(std::string name)

{
	this->name_=name;
	return;
}  
void Film::show() //статический метод просмотреть
{  Programm *p=head; 
while(p) 
{   p->getname();
p->gethour();
	
	p=p->next;  }
} 
void Film::Print()
{  if (!head)  
{   
	head=this; 
	this->next=NULL;  }
else  {   Programm * q=head; 
if (q->next==NULL)  
{
	q->next=this; 
	this->next=NULL;   } 
else
{    while (q->next!=NULL)  
{     q=q->next;    };
q->next=this;  
this->next=NULL;   };  }; }; 
