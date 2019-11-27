#include<iostream>

using namespace std;
class disdiff2;
class disdiff1
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

friend bool operator>(disdiff1 a,disdiff2 b);

};

class disdiff2
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

friend bool operator>(disdiff1 a,disdiff2 b);

};


bool operator>(disdiff1 a,disdiff2 b)
{

b.ft=b.ft+b.inch/12;
a.ft=a.ft+a.inch/12;
//if((a.ft+a.inch/12)>(b.ft+b.inch/12))
if(a.ft>b.ft)
return true;
else
return false;
}

int main()
{
disdiff1 aa; disdiff2 bb;
aa.set();//aa.display();
bb.set();//bb.display();

if(aa>bb)
aa.display();
else
bb.display();


return 0;
}
