#include<iostream>
using namespace std;
class adddata
{
public:
int a,b;
void accept()
{
cout<<"enter a and b";
cin>>a>>b;
}
};
class addinherit : public adddata
{
public:
void add()
{
cout<<"added number result :"<<(a+b);
}
};
int main()
{
addinherit a;
a.accept();
a.add();
return 0;
}
