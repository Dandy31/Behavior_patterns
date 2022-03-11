#include <iostream>

#include "CareTaker.h"
#include "Memento.h"

using namespace std;


void main()
{
	Memento* phone = new Memento("Iphone", "12 Pro Max");
	CareTaker obj;

	cout << "\n" << phone->GetSmartphone().c_str() << " " << phone->GeModel().c_str() << "\n" << "\n";

	obj.Save(phone);

	phone->SetSmartphone("Samsung Galaxy");
	phone->SetModel("Z Fold");

	obj.Save(phone);

	cout << "\n" << phone->GetSmartphone().c_str() << " " << phone->GeModel().c_str() << "\n" << "\n";

	phone = obj.Restore(0);

	cout << "\n" << phone->GetSmartphone().c_str() << " " << phone->GeModel().c_str() << "\n" << "\n";

	phone = obj.Restore(1);

	cout << "\n" << phone->GetSmartphone().c_str() << " " << phone->GeModel().c_str() << "\n" << "\n";
}