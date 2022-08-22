#include "TaxPark.h"

TaxPark::TaxPark()
{
}

TaxPark::TaxPark(string name)
{
	this->name = name;
}

void TaxPark::addCar(Car& car)
{
	this->car.push_back(car);
	this->carS.push_back(car);
}

void TaxPark::addDriver(Driver& driver)
{
	this->driver.push_back(driver);
}

void TaxPark::delCarS(Car&car)
{
	
	for (int i = 0; i < carS.size(); i++)
	{
		if (carS[i] == car) {
			carS.erase(carS.begin() + i);
		}
	}
}



void TaxPark::printCar()
{
	cout << "list of Car" << endl;
	for (int i = 0; i < car.size(); i++)
	{
		car[i].print();
		cout << endl;
	}
	cout << endl << endl;
}

void TaxPark::printDriver()
{
	cout << "list of drivers" << endl;
	for (int i = 0; i < driver.size(); i++)
	{
		driver[i].print();
		cout << endl;
	}
	cout << endl << endl;
}
void TaxPark::printCarS()
{
	cout << "free taxi" << endl;
	for (int i = 0; i < carS.size(); i++)
	{
		carS[i].print();
		cout << endl;
	}
	cout << endl << endl;
}
void TaxPark::printOrder()
{
	cout << "LIST ZAKAZOV" << endl;
	for (int i = 0; i < order.size(); i++)
	{
		order[i].print();
	}
}

void TaxPark::pribCompany()
{
	int a = 0;
	for (int i = 0; i < order.size(); i++)
	{
		a+=order[i].procentCompany();
	}
	cout << "PriBbll company = " << a;
}

void TaxPark::addProfit(float a)
{
	profit.push_back(a);
}

