#include<iostream>
using namespace std;

class complex_OO
{
public:
int real,img;
public:
void set()
{
cout<<"enter real and imag : ";
cin>>real>>img;
}

void display()
{cout<<"display : "<<real<<" +i"<<img;}

complex_OO operator+(complex_OO a2)
{
complex_OO c;
c.real=real+a2.real;
c.img=img+a2.img;
return c;
}

};
int main()
{
complex_OO a,b,c;
a.set();b.set();
a.display();b.display();
c=a+b;
c.display();

return 0;
}
