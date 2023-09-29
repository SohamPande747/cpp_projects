#include <iostream>

using namespace std;

class Complex
{
	int a,b;

	public:
	Complex ();

	void printData()
	{
		cout << "Your number is " << a << "+" << b << "i" << endl;
	}
};

Complex :: Complex()
{
	a = 10;
	b = 6;
}

int main()
{
	Complex f;
	f.printData();
}

