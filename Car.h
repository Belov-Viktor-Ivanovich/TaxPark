#pragma once
using namespace std;
class Car
{
	friend class Order;
	friend class TaxPark;
private:
	string model;
	string num;
	string color;
	bool flag=false;
public:
	Car();
	Car(string model, string num, string color,bool flag=false);
	bool operator ==(const Car& car);
	void print();



	
};

