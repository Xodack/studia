#include <iostream>
#include<cmath>

using namespace std;

int main() 
{
	/*
	double a,b,x;
	cout<<"program do obliczanaia miejsc zerowych funkcji liniowej w postaci ax+b"<<endl;
	cout<<"podaj a: ";
	cin>>a;
	cout<<"podaj b: ";
	cin>>b;
	
	if(a==0)
		cout<<"brak miejsc zerowych";
	else if(b==0)
		cout<<"nieskonczenie wiele miejsc zerowych";
	else
	{
		x=-b/a;	
		cout<<"miejsce zerowe wynosi= "<<x;
	}
	*/
	
	/*
	double a,b,c,x;
	cin>>a;
	cin>>b;
	cin>>c;
	
	if(a==0)
	{
		if(b==0)
		{
			cout<<"a i b nie moga sie jednoczesnie rownac 0";
		}
		if(c!=0)
		{
			cout<<"brak miejsc zerowych";
			
		}
		if(c==0)
		{
			cout<<"nieskonczenie wiele miesjc zerowych";
		}
		
	}
	
	if(a!=0)
	{
		if(b==0)
		{
			x=-c/a;
			cout<<x;
		}
		if(c==0)
		{
			x=0;
			cout<<x;
		}
	}
	*/
	
	double a,b,c,x1,x2,delta;
	
	cout<<"podaj a (a=/=0)";
	cin>>a;
	cin>>b;
	cin>>c;
	
	delta=(b*b)-4*(a*c);
	
	if(delta>0)
	{
		x1=(-b-sqrt(delta))/(2*a);
		x2=(-b+sqrt(delta))/(2*a);
		cout<<"x1= "<<x1<<"	x2= "<<x2;
	}
	
	if(delta==0)
	{
		x1=-b/(2*a);
		cout<<"x0= "<<x1;
	}
	
	if(delta<0)
	{
		cout<<"brak miejsc zerowych";
	}
	
	
	











	return 0;
}
