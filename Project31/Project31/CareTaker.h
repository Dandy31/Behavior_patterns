#pragma once
#include "Memento.h"
#include <iostream>
#include <vector>

class CareTaker
{
private:
	vector<Memento*> history;
public:
	void Save(Memento* obj)
	{
		Memento* tmp = new Memento(obj->GetSmartphone(), obj->GeModel());
		history.push_back(tmp);
	}
	Memento* Restore(int index)
	{
		return history.at(index);
	}
};