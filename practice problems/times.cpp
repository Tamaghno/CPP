#include<iostream>
using namespace std;
class times
{
private:
int hr=0,min=0,sec=0;
public:
times(){}
times(int h,int m,int s)
{hr=h;min=m;sec=s;}

void display()
{
cout<<"time is : "<<hr<<":"<<min<<":"<<sec;
}
void add(times t1,times t2)
{
hr=t1.hr+t2.hr;
min=t1.min+t2.min;
sec=t1.sec+t2.sec;

if(sec>=60)
{min++;sec=sec-60;}

if(min>=60)
{hr++;min=min-60;}
}

};
int main()
{
times t;t.display();
times t1(12,40,50);t1.display();
times t2(10,15,40);t2.display();
t.add(t1,t2);
t.display();
return 0;
}
