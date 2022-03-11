#pragma once
#include <string>
using namespace std;

class Memento
{
private:
	string smartphone;
	string model;
public:
	Memento(string _Smartphone, string _Model)
	{
		smartphone = _Smartphone;
		model = _Model;
	}

	string GetSmartphone()
	{
		return smartphone;
	}
	void SetSmartphone(string _Smartphone)
	{
		smartphone = _Smartphone;
	}

	string GeModel()
	{
		return model;
	}
	void SetModel(string _Model)
	{
		model = _Model;
	}
};