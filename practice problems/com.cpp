#include<iostream>
using namespace std;

class com
{
public:
int r,i;
void read()
{
cout<<"give real img :";
cin>>r>>i;
}
void display()
{
cout<<"complex : "<<r<<" +i"<<i<<endl;
}

com operator+(com a)
{
com t;
t.r=r+a.r;
t.i=i+a.i;
return t;
}

};
int main()
{

com c1,c2,c3;
c1.read();c2.read();
c1.display();c2.display();

c3=c1+c2;
c3.display();

return 0;
}
