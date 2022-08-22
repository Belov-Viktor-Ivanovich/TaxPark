// Таксопарк.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iostream>
#include<vector>
#include "TaxPark.h"
#include "Order.h"
#include "Car.h"
#include "Driver.h"
using namespace std;
int Order::count = 0;

int main()
{
    TaxPark taxPark{ "Uber" };
    Car car1("Solaris", "777", "White");
    Car car2("Skoda", "111", "Blue");
    Car car3("Rio", "222", "Black");
    Driver driver1("2232323", "Igor");
    Driver driver2("4564545", "Vova");
    Driver driver3("1232323", "Sasha");
    taxPark.addCar(car1);
    taxPark.addCar(car2);
    taxPark.addCar(car3);
    taxPark.addDriver(driver1);
    taxPark.addDriver(driver2);
    taxPark.addDriver(driver3);
    taxPark.printCar();
    taxPark.printDriver();
    Order::orderCar(car1, driver1,taxPark, 15, 9.30);
    taxPark.printCarS();
    //taxPark.printOrder();
    Order::orderCar(car2, driver2, taxPark,10,15.30);
    taxPark.printOrder();
    Order order(car3, driver2, 10, 15.30);
    cout << order.profit();

    
    
}

