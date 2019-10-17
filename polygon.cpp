//Class polygon contains data member width and height and public method set_value() toassign values to width and height.
//Class Rectangle and Triangle are inherited from polygon class. Both the classes contain public method calculate_area() to calculate the area of Rectangle and Triangle.
//Use base class pointer to access the derived class object and show the area calculated.


#include<iostream>
using namespace std;

class polygon
{
public:
float w,h;

void set_area()
{
cout<<"give width : ";
cin>>w;
cout<<"give height : ";
cin>>h;
}
virtual void calculate_area()=0;
};

class rectangle : public polygon
{
public:
void calculate_area()
{
cout<<"rectangle area = "<<(w*h)<<endl;
}
};

class triangle : public polygon
{
public:
void calculate_area()
{
cout<<"triangle area = "<<(0.5*w*h)<<endl;
}
};

int main()
{
polygon *p;

rectangle r;
triangle t;

cout<<"for rectangle : "<<endl;
p=&r;
p->set_area();
p->calculate_area();

cout<<"for triangle : "<<endl;
p=&t;
p->set_area();
p->calculate_area();

return 0;
}
