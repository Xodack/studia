#include <iostream>

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
	
	double a,b,c,x;
	cin>>a;
	cin>>b;
	cin>>c;
	
	if(a==0)
	{
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
	
	
	
	











	return 0;
}
