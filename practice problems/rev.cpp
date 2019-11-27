#include<iostream>
#include<string.h>
using namespace std;
int i;
class rev
{
public:

char str[50];
public:
void input()
{

cout<<"enter string : ";
cin>>str;
}

rev operator!()
{
for(i=0;str[i]!=' ';i++)
{
if(str[i]>=65 && str[i]<=96)
str[i]+=32;
else if(str[i]>=97 && str[i]<=122)
str[i]-=32;
}
}
void display()
{
cout<<"rev case : "<<str;
}

};
int main()
{

rev r;
r.input();
!r;
r.display();

return 0;

}
