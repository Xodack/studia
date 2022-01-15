#include <iostream>
#include <cmath>

using namespace std;

class obliczenia
{	
public:

	obliczenia()
	{
		a = 0;
		b = 0;
		c = 0;
	}
	void wyswietl(int a1, int b1)
	{
		c = a1 + b1;
		cout << a1 << "+" << b1 << "=" << c << endl;
	}

private:
	int a;
	int b;
	int c;
};


class adapter
{
public:

	adapter()
	{
		liczenie = new obliczenia();
	}

	void pobierz()
	{
		cout << "podaj d:";
		cin >> d;
		cout << "podaj e:";
		cin >> e;
	}

	void cos123()
	{
		d1 = d / 2;
		e1 = e * 2;
		liczenie->wyswietl(d1, e1);
	}

private:
	int e;
	int d;
	int d1;
	int e1;
	obliczenia* liczenie;
};


int main()
{
	adapter* cadapter = new adapter();

	cadapter->pobierz();
	cadapter->cos123();

	return 0;
}
