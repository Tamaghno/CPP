#include<iostream>
#include<string.h>
using namespace std;

class dis
{
public:
float ft,in;
void read()
{
cout<<"give ft and inches: ";
cin>>ft>>in;
}
void display()
{
cout<<"ft : "<<ft<<" inch : "<<in;
}
friend bool operator>(dis d,dis e);
};
bool operator>(dis d,dis e)
{
d.ft=d.ft+d.in/12;
e.ft=e.ft+e.in/12;
if(d.ft>e.ft)
return true;
else
return false;
}
int main()
{

dis d,e;
d.read();e.read();
d.display();e.display();

if(d>e)
d.display();
else
e.display();

return 0;
}
