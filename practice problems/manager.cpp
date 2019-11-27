#include<iostream>
using namespace std;
class person
{
public:
char name[50];
};
class employee : public person
{
public:
char eid[50];
};
class manager : public employee
{
public:
int sal;
void details()
{
cout<<"enter name, id, salary :"<<endl;
cin>>name>>eid>>sal;
}
};
int main()
{
int n,ch,temp,i;
cout<<"enter no of managers";
cin>>n;
manager m[n];
do{
cout<<"1 to accept details, 2 to display highest salary, 3 to exit"<<endl;
cin>>ch;

switch(ch)
{
case 1:
for(int i=0;i<n;i++)
m[i].details();
break;
case 2:
temp=0;
for(int i=0;i<n;i++)
{
if(m[temp].sal<m[i].sal)
temp=i;
}
cout<<"highest salary name "<<m[temp].name<<"  id : "<<m[temp].eid;
break;
case 3:
goto end;
}

}while(1);
end:
return 0;
}
