#include <iostream>

using namespace std;


class pktrgb3d
{	
public:
	
	pktrgb3d()
	{
		x=0;
		y=0;
		z=0;
		r=0;
		g=0;
		b=0;
	}
	void pkt3dx(int x)
	{ 
		cout << "pkt x: " <<endl;
		cout << "x = " << x << endl; 
	};
	
	void pkt3dy(int y)
	{ 
		cout << "pkt y: " <<endl;
		cout << "y = " << y << endl; 
	};
	
	void pkt3dz(int z)
	{ 
		cout << "pkt z: " <<endl;
		cout << "z = " << z << endl; 
	};
	
	void pkt3dr(int r,int x,int y,int z)
	{
		cout<<"dioda o wspolrzednych x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
		if(r==0)
		{
			cout<<"nie swieci sie"<<endl;
		}
		else if(r==1)
		{
			cout<<"swieci sie na czerwono"<<endl;
		}
		else
		{
			cout<<"wartosc nie miesci sie w przedziale <0,1> (on/off)"<<endl;
		}
	}
	
	void pkt3dg(int g,int x,int y,int z)
	{
		cout<<"dioda o wspolrzednych x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
		if(g==0)
		{
			cout<<"nie swieci sie"<<endl;
		}
		else if(g==1)
		{
			cout<<"swieci sie na zielono"<<endl;
		}
		else
		{
			cout<<"wartosc nie miesci sie w przedziale <0,1> (on/off)"<<endl;
		}
	}
	
	void pkt3db(int b,int x,int y,int z)
	{
		cout<<"dioda o wspolrzednych x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
		if(b==0)
		{
			cout<<"nie swieci sie"<<endl;
		}
		else if(b==1)
		{
			cout<<"swieci sie na niebiesko"<<endl;
		}
		else
		{
			cout<<"wartosc nie miesci sie w przedziale <0,1> (on/off)"<<endl;
		}
	}
	
	
private:
	int x;
	int y;
	int z;
	int r;
	int g;
	int b;
	
	
};





class fasada
{
public:
    fasada()
    {
		cpktx = new pktrgb3d();
		cpkty = new pktrgb3d();
		cpktr = new pktrgb3d();
		z=0;
    }

	void getxyr()
	{
		cout<<"podaj x: ";
		cin>>x;
		cout<<"podaj y: ";
		cin>>y;
		cout<<"0 - off, 1 - on: ";
		cin>>r;
	}
	
    void cpktxy2d()
    {
		cpktx->pkt3dx(x);
		cpkty->pkt3dy(y);
		cpktr->pkt3dr(r,x,y,z);
    }

private:
	int x;
	int y;
	int r;
	int z;
    pktrgb3d *cpktx;
    pktrgb3d *cpkty;
    pktrgb3d *cpktr;
};


int main()
{
    fasada *cfasada = new fasada();

	cfasada->getxyr();
    cfasada->cpktxy2d();
    

    return 0;
}
