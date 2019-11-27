#include<iostream>
#include<string.h>
using namespace std;
class concatoo
{
private:
char str[50];
public:
void set()
{
cout<<"enter the string ";
cin>>str;
}

void display()
{cout<<"string is "<<str;}

concatoo operator+(concatoo a)
{
concatoo c;
strcat(str,a.str);
strcpy(c.str,str);
return c;
}

};

int main()
{
concatoo aa,bb,cc;
aa.set();aa.display();
bb.set();bb.display();

cc=aa+bb;
cc.display();


return 0;
}
