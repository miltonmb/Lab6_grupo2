#pragma once
#include "Contacto.h"
#include <string>
using std::string;

class Amigo: public Contacto{
  private:
	int years;
	string nombref;
  public:
	Amigo(string,int,int, string);
	virtual ~Amigo();
	virtual string toString()const;
};