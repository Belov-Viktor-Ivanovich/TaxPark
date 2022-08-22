
#include<iostream>
#include<vector>
#include "TaxPark.h"
#include "Driver.h"
#include "Order.h"
#include "Car.h"

Car::Car()
{
}

Car::Car(string model, string num, string color, bool flag)
{
	this->model = model;
	this->num = num;
	this->color = color;
	this->flag = flag;
	
}
bool Car::operator ==(const Car& car)
{
	return this->color == car.color && this->model == car.model && this->num == car.num;
}

void Car::print()
{
	cout << "Color : " << this->color << "\t" << "Model : " << this->model << "\t" << "Number : " << this->num;
}
