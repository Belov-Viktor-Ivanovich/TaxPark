#include<iostream>
#include<vector>
#include "TaxPark.h"
#include "Order.h"
#include "Car.h"
#include "Driver.h"

Driver::Driver()
{
}

Driver::Driver(string tel, string name,bool flag)
{
	this->name = name;
	this->tel = tel;
	this->flag = flag;
	
}

void Driver::print()
{
	cout << "Name Driver : " << this->name << "\t" << "Phone : " << this->tel;
}
float Order:: profit()
{
	int a = time;
	float b = time - a;
	cout << b;
	return this->price;
}
