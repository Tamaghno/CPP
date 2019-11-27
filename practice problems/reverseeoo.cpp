#include<iostream>

using namespace std;
class reverseoo
{
public:
char str[50];
public:
void set()
{
cout<<"enter the string ";
cin>>str;
}

void display()
{cout<<"rev str is "<<str;}

reverseoo operator!()
{
for(int i=0;str[i]!=' ';i++)
{
if(str[i]>=65 && str[i]<=96)
str[i]+=32;
else if(str[i]>=97 && str[i]<=122)
str[i]-=32;
}
}

};
int main()
{
reverseoo r;
r.set();
!r;
r.display();
return 0;
}
