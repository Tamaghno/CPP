#include<iostream>
using namespace std;

class poly
{
public:
int w,h;
void set(int ww,int hh)
{
w=ww;h=hh;
}
};
class rect : public poly
{public:
void area()
{
cout<<"area rect : "<<(w*h);
}
};
class tri : public poly
{public:
void area()
{
cout<<"area tri : "<<(0.5*w*h);
}
};
int main()
{

poly *p;
rect r;
tri t;

p=&r;
r.set(9,8);
r.area();

p=&t;
t.set(2,2);
t.area();

return 0;
}
