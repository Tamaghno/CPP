// Design a class Polar which describes a point using polar coordinates  radius  and angle . This requires first the conversion of points into rectangular co-ordinates , then  adding  the corresponding rectangular co-ordinates and finally  converting the result back into polar co-ordinates . 
//You need to use the following trigonometric formulae:
//x=  r * cos(a);
//y =  r* sin (a);
//a= atan(x/y); // arc tangent 
//r = sqrt(x * x + y * y);



#include<iostream>
#include<math.h>
using namespace std;
#define pi 3.1416
class polar
{
float r,a,x,y;
public:
//polar(){};
//polar(float r1,float a1);
//polar operator+(polar r1);
//void display(void);


polar(float r1,float a1)
{
r=r1;
a=a1*(pi/180);
x=r*cos(a);
y=r*sin(a);
}

polar operator+(polar r1)
{
polar R(0,0);
R.x=x+r1.x;
R.y=y+r1.y;
R.r=sqrt(R.x*R.x+R.y*R.y);
R.a=atan(R.y/R.x);
return R;
}

void display()
{
cout<<"radius = "<<r<<"\n angle = "<<a*(180/pi)<<"\n";
}
};
int main()
{
//polar p1,p2,p3;
float r,a;
cout<<" Enter radius and angle : ";
cin>>r>>a;
polar p1(r,a);
polar p2(8,45);
polar p3(0,0);
p3=p1+p2;
cout<<" p1 : \n";
p1.display();
cout<<" p2 : \n ";
p2.display();
cout<<" p3 : \n ";
p3.display();
return 0;
}
