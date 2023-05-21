#include<iostream>   //for multiple inherutance
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
		cout << "\nConstructor of base class without arguments and space is alloted\n";
		ptr = new int[3];
	}
	baseclass(int a, int b)
	{
		len = a;
		wed = b;
		cout << "Constructor of base class with arguments and space is alloted\n";
		cout << len << endl;
		cout << wed << endl;
		ptr = new int[3];
	}
	~baseclass()
	{
		delete ptr;
		cout << "\nDestructor of base class is called and spacec is free\n";

	}
};

class derivedclassA
{
private:
	int var;
	int* ptr1;
public:
	derivedclassA()
	{
		var = 0;
		cout << "\nConstructor of derived classA without arguments and space is alloted\n";
		ptr1 = new int[3];
	}
	derivedclassA(int a)
	{
		var = a;
		cout << "Constructor of derived classA with arguments and space is alloted\n";
		cout << var << endl;
		ptr1 = new int[3];
	}
	~derivedclassA()
	{
		delete ptr1;
		cout << "\nDestructor of derived classA is called and space is free\n";
	}
};
class derivedclassB :public derivedclassA, public baseclass
{
private:
	int var1;
	int* ptr2;
public:
	derivedclassB() :derivedclassA(), baseclass()
	{
		ptr2 = new int[3];
		var1 = 0;
		cout << "\nConstructor of derived classB without arguments called and space is alloted\n";
	}
	derivedclassB(int a, int b, int c, int d) :derivedclassA(b), baseclass(c, d)
	{
		ptr2 = new int[3];
		var1 = a;
		cout << "\nConstructor of derivedB classB with arguments and space is alloted\n";
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
