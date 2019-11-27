#include<iostream>

using namespace std;
class distanceoo
{
public:
float ft,inch;
public:
void set()
{
cout<<"enter the feet and inch ";
cin>>ft>>inch;
}

void display()
{cout<<"feet is "<<ft<<" inches is "<<inch;}

friend bool operator>(distanceoo a,distanceoo b);

};
bool operator>(distanceoo a,distanceoo b)
{

b.ft=b.ft+b.inch/12;
a.ft=a.ft+a.inch/12;
if(a.ft>b.ft)
return true;
else
return false;
}

int main()
{
distanceoo aa,bb,cc;
aa.set();//aa.display();
bb.set();//bb.display();

if(aa>bb)
aa.display();
else
bb.display();


return 0;
}
