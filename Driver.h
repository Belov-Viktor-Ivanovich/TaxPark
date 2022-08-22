#pragma once
using namespace std;
class Driver
{
	friend class Order;
	friend class TaxPark;
private:
	string tel;
	string name;
	bool flag;
public:
	Driver();
	Driver(string tel, string name,bool flag=false);
	void print();

	
	
};

