#include<iostream>    //for single inheritance
using namespace std;
class baseclass
{
private:
	int len, wed;
	int* ptr;
public:
	baseclass()
	{
		len = 0;
		wed = 0;
		cout << "Constructor of base class without arguments and space is alloted \n";
		ptr = new int[3];
	}
	baseclass(int a, int b)
	{
		len = a;
		wed = b;
		cout << "Constructor of base class with arguments and space is alloted \n";
		ptr = new int[3];
	}
	~baseclass()
	{
		delete ptr;
		cout << "\nDestructor of base has been called and dynamic space is delete";
	}
};

class derivedclass :public baseclass
{
private:
	int var;
	int* ptr1;
public:
	derivedclass() :baseclass()
	{
		var = 0;
		cout << "\nConstructor of derived class without arguments is called and space is alloted\n";
		ptr1 = new int[3];
	}
	derivedclass(int a, int b, int c) :baseclass(b, c)
	{
		var = a;
		cout << "\nConstructor of derived class with arguments is called and space is alloted\n";
		ptr1 = new int[3];
	}
	~derivedclass()
	{
		delete ptr1;
		cout << "\nDestructor of derived class has been called and space is made free\n";
	}
};
int main()
{
	derivedclass obj, obj1(1, 2, 3);
}
