#include<iostream>
using namespace std;
class Complex{
	public:
		int real,img;
		Complex(int real,int img)
		{
			this->real=real;
			this->img=img;
			
		}
		Complex()
		{
			this->img=0;
			this->real=0;
		}
		Complex(int real)
		{
		this->real=real;
		this->img=0;	
		}
	
		void Printdetails()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		Complex operator +(Complex m)
		{
			Complex p;
			p.real=real+m.real;
			p.img=img+m.img;
			return p;
		}
		
};

int main(){
	
	Complex c1;
	Complex c2(10,20);
	Complex c3(20,30);
	Complex n(10);
	Complex c4=c1+c2+c3+n;
	c4.Printdetails();
	
	
	
	
	return 0;
}
