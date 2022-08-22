#pragma once
#include<iostream>
#include<vector>
#include "TaxPark.h"
#include "Driver.h"
#include "Car.h"
using namespace std;
class Order
{
public:
	static int count;
private:
	Car car;
	Driver driver;
	int numTrip;
	float minPriceOrder = 52;
	int km = 0;
	float time;
	float price = 0;
	

public:
	Order(Car& car, Driver& driver,int km,float time);
	static void orderCar(Car& car, Driver& driver, TaxPark& taxPark,int km, float time);
	void print();
	float profit();


};


