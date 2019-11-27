#include<iostream>
using namespace std;

class complex
{
int real,img;
public:
void set()
{
cout<<"enter real and imag part : ";
cin>>real>>img;
}
friend complex sum(complex,complex);
friend complex sub(complex,complex);

void display(int a);
};

void complex::display(int a)
{
if(a==1)
cout<<"\n the sum is "<<real<<" +i"<<img;
if(a==2)
cout<<"\n the sub is "<<real<<" +i"<<img;
if(a==3)
cout<<"\n the mul is "<<real<<" +i"<<img;
}

complex sum(complex a,complex b)
{
complex t;
t.real=a.real+b.real;
t.img=a.img+b.img;
return t;
}

complex sub(complex a,complex b)
{
complex t;
t.real=a.real-b.real;
t.img=a.img-b.img;
return t;
}

int main()
{
complex a,b,c,d,e;
a.set();b.set();
c=sum(a,b);
d=sub(a,b);
c.display(1);
d.display(2);
return 0;
}
