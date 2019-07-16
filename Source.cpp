#include <iostream>
#include <string>

using namespace std;

class Food
{
protected:
	double price;
	string name;
public:
	virtual string getName() = 0;
	virtual double getPrice() = 0;
};

//test
//Added text.
//Added textTwo.
// new test string
class Pizza: public Food
{
	
public:
	string getName() override
	{
		return "pizza";
	}
	double getPrice() override
	{
		return 99.99;
	}
};

class DynamicWrapper: public Food
{

};

void main()
{
	setlocale(LC_ALL, "rus");

	auto pizza = new Pizza;

	cout << "Name: " << pizza->getName() << "\nPrice: " << pizza->getPrice() << "\n";

	system("pause");
}