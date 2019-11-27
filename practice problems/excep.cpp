#include<iostream>
using namespace std;

class excep
{
public:
double a,b;
void read()
{
cout<<"enter two double number :"<<endl;
cin>>a>>b;
}
void div()
{
try
{
if(cin.fail())
throw "bad input";
if(b==0)
throw 0;
cout<<"and is : "<<(a/b);
}
catch(const int n){cout<<"error div by "<<n;}
catch(const char* str){cout<<str;}
catch(...){cout<<"default exception";}
}

};
int main()
{
excep x;
x.read();
x.div();
return 0;
}
