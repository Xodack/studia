#include "menu.hpp"
#include <iostream>
#include<cmath>
#include<conio.h>

using namespace std;

void menu()
{

	int x;

	cout <<"1.Funkcja liniowa"<<endl;
	cout <<"2.Funkcja kwadratowa"<<endl;
	cout <<"3.Funkcja w postaci kanonicznej"<<endl;

	cin>>x;
	switch(x)
	{
		case 1:
		{
			cout<<"Funkcja liniowa"<<endl;
			funkcjaliniowa();
		}
		break;
		case 2:
		{
			cout<<"Funkcja kwadratowa"<<endl;
			funkcjakwadratowa();
		}
		break;
		case 3:
		{
			cout<<"Funkcja w postaci kanonicznej"<<endl;
			funkcjakanoniczna();
		}
		break;
		default:
			cout<<"Bledny wybor! --- Koniec";
	}
}


int funkcjaliniowa()
{
	double a,b,c,x;
	cout<<"Funkcja Ax + By + C = 0"<<endl;
	cout<<"Podaj A: ";
	cin>>a;
	cout<<"Podaj B: ";
	cin>>b;
	cout<<"Podaj C: ";
	cin>>c;
	
	if(a==0)
	{
		if(b==0)
		{
			cout<<"A i B nie moga sie jednoczesnie rownac 0";
		}
		else if(c!=0)
		{
			cout<<"brak miejsc zerowych";
			
		}
		else if(c==0)
		{
			cout<<"nieskonczenie wiele miesjc zerowych";
		}
	}
	
	if(a!=0)
	{
		if(b==0)
		{
			x=-c/a;
			cout<<"miejsce zerowe wynosi = "<<x;
		}
		
		if(c==0)
		{
			x=0;
			cout<<"miejsce zerowe wynosi = "<<x;
		}
		else if(c!=0)
		{
			x=-((b*0)/a)-(c/a);
			cout<<"miejsce zerowe wynosi = "<<x;	
		}
	}
}
int funkcjakwadratowa()
{
			
	double a,b,c,x1,x2,delta;
	cout<<"Funkcja Ax^2 + Bx + C"<<endl;
	cout<<"podaj A: ";
	cin>>a;
	cout<<"podaj B: ";
	cin>>b;
	cout<<"podaj C: ";
	cin>>c;
	
	if(a!=0)
	{
		delta=(b*b)-4*(a*c);
		
		if(delta>0)
		{
			x1=(-b-sqrt(delta))/(2*a);
			x2=(-b+sqrt(delta))/(2*a);
			cout<<"miejsca zerowe wynosza: "<<endl;
			cout<<"x1= "<<x1<<"	x2= "<<x2;
		}
		
		if(delta==0)
		{
			x1=-b/(2*a);
			cout<<"miejsce zerowe wynosi: "<<endl;
			cout<<"x0= "<<x1;
		}
		
		if(delta<0)
		{
			cout<<"brak miejsc zerowych";
		}
	}
	if(a==0)
	{
		if(b==0)
		{
			cout<<"brak miejsc zerowych";
		}
		else if(c==0)
		{
			cout<<"nieskonczenie wiele miejsc zerowych";
		}
		else
		{
			x1=-c/b;	
			cout<<"miejsce zerowe wynosi= "<<x1;
		}
	}
}


funkcjakanoniczna()
{
	double a,x,p,q,b,c,delta,x1,x2,x0;
	
	cin>>a;
	cin>>p;
	cin>>q;
	
	b=(-2*a*p);
	c=(a*(p*p)+q);
	
	if(a!=0)
	{
		delta=(b*b)-4*(a*c);
		
		if(delta>0)
		{
			x1=(-b-sqrt(delta))/(2*a);
			x2=(-b+sqrt(delta))/(2*a);
			cout<<"miejsca zerowe wynosza: "<<endl;
			cout<<"x1= "<<x1<<"	x2= "<<x2;
		}
		
		if(delta==0)
		{
			x1=-b/(2*a);
			cout<<"miejsce zerowe wynosi: "<<endl;
			cout<<"x0= "<<x1;
		}
		
		if(delta<0)
		{
			cout<<"brak miejsc zerowych";
		}
	}
	if(a==0)
	{
		if(b==0)
		{
			cout<<"brak miejsc zerowych";
		}
		else if(c==0)
		{
			cout<<"nieskonczenie wiele miejsc zerowych";
		}
		else
		{
			x1=-c/b;	
			cout<<"miejsce zerowe wynosi= "<<x1;
		}
	}	
}

