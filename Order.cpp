 #include "Order.h"

Order::Order(Car& car, Driver& driver, int km, float time)
{
	this->car = car;
	this->driver = driver;
	this->km = km;
	this->time = time;
	count++;
	this->numTrip = count;
}

void Order::orderCar(Car& car, Driver& driver,TaxPark&taxPark, int km, float time)
{
	car.flag = true;
	driver.flag = true;
	Order order(car, driver,km,time);
	taxPark.order.push_back(order);
	taxPark.delCarS(car);
	
}

void Order::print()
{
	cout << "Zakaz : " << numTrip << endl;
	cout << "Car : ";
	cout << car.model << " " << car.color << " " << car.num << endl;
	cout << "Driver : ";
	cout<<driver.name<<" "<<driver.tel<<endl;
}
