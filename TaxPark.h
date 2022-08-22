#pragma once
#include<iostream>
#include<vector>
#include "Car.h"
#include "Driver.h"
#include "Order.h"
using namespace std;
class TaxPark
{
	friend class Order;
	vector<Car>car;
	vector<Car>carS;
	vector<Driver>driver;
	vector<Order>order;
	vector<float>profit; //прибыдь со всех заказов
	string name;
public:

	TaxPark();
	TaxPark(string name);
	void addCar(Car& car);
	void addDriver(Driver& driver);
	void delCarS(Car&car);
	void printCar();
	void printDriver();
	void printCarS();
	void printOrder();
	

	
};

