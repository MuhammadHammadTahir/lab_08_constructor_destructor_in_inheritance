#include<iostream>
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
		cout << "\nConstructor of base class without arguments called and space is alloted\n";
		ptr = new int[3];
	}
	baseclass(int a, int b)
	{
		len = a;
		wed = b;
		cout << "Constructor of base class with arguments called and space iis allotted\n";
		ptr = new int[3];
		cout << len << endl;
		cout << wed << endl;
	}
	~baseclass()
	{
		delete ptr;
		cout << "\nDestructor of base class is called and dspace is free\n";
	}
};

class derivedclassA :public baseclass
{
private:
	int var;
	int* ptr1;
public:
	derivedclassA() :baseclass()
	{
		var = 0;
		cout << "\nConstructor of derived classA without arguments is called and space is allotted\n";
		ptr1 = new int[3];
	}
	derivedclassA(int a, int b, int c) :baseclass(b, c)
	{
		var = a;
		cout << "Constructor of derived classA with arguments called and space is allotted\n";
		ptr1 = new int[3];
		cout << var << endl;
	}
	~derivedclassA()
	{
		delete ptr1;
		cout << "\nDestructor of derived classA is called and space is free\n";

	}
};
class derivedclassB :public derivedclassA
{
private:
	int var1;
	int* ptr2;
public:
	derivedclassB() :derivedclassA()
	{
		var1 = 0;
		cout << "\nConstructor of derived classB without arguments is called and space is allotted\n";
		ptr2 = new int[3];
	}
	derivedclassB(int a, int b, int c, int d) :derivedclassA(b, c, d)
	{
		var1 = a;
		cout << "\nConstructor of derivedB classB with arguments is called and space is allotted\n";
		ptr2 = new int[3];
		cout << var1 << endl;
	}
	~derivedclassB()
	{
		delete ptr2;
		cout << "\nDestructor of derived classB is called\n";
	}
};

int main()
{
	derivedclassB obj, obj1(1, 2, 3, 4);
}
