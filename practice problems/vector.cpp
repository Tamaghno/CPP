#include<iostream>
#include<cctype>
#include<string.h>
using namespace std;
int const size=50;
class vector
{
float d[size];
int s;
public:

void create(void);
void modify(void);
void mul(void);
void display(void);
};
void vector::create(void)
{
cout<<"enter the size of array : ";
cin>>s;
cout<<"enter the "<<s<<" real values :";
for(int i=0;i<s;i++)
cin>>d[i];
}
void vector::modify(void)
{
int index;
cout<<"enter index for value modification : ";
cin>>index;
float with;
cout<<"enter the value to be changed with : ";
cin>>with;

d[index]=with;
}
void vector::mul(void)
{
int scalar;
cout<<"enter value for multiplication : ";
cin>>scalar;
for(int i=0;i<s;i++)
d[i]=d[i]*scalar;
}
void vector::display(void)
{
cout<<"displaying"<<endl;
for(int i=0;i<s;i++)
cout<<d[i]<<" ";
}
int main()
{
vector v;int choice;
do{
cout<<"\n enter 1 to create, 2 to modify, 3 to multiply, 4 to display, 5 to end: \n";
cin>>choice;
switch(choice)
{
case 1:
v.create();break;
case 2:
v.modify();break;
case 3:
v.mul();break;
case 4:
v.display();break;
case 5:
goto end;
}
}while(1);
end:
return 0;
}
