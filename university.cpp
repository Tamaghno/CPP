#include<iostream>
using namespace std;

class university
{ 
public:
char name[10], dept[10], person[10];

void input()
{
cout<<"univ name : ";cin>>name;
cout<<"dept name : ";cin>>dept;
cout<<"person name : ";cin>>person;
}

void display()
{
cout<<"university info "<<endl;
cout<<"university name : "<<name<<endl;
cout<<"dept : "<<dept<<endl;
cout<<"person assigned : "<<person<<endl;
}
};
class company
{
public:
char name[10]; int no, amt;

void input()
{
cout<<"company name : ";cin>>name;
cout<<"no of engineers : ";cin>>no;
cout<<"amount invested : ";cin>>amt;
}
void display()
{
cout<<"company info : "<<endl;
cout<<"company name : "<<name<<endl;
cout<<"no of engineers : "<<no<<endl;
//cout<<"amount invested : "<<amt;
}
};
class project:public university, public company
{
public:
char type[10];int dur,amtgranted;

void input()
{
cout<<"project type : ";cin>>type;
cout<<"duration : ";cin>>dur;
cout<<"amount granted : ";cin>>amtgranted;
}
void display()
{
university u;
u.input();
company c;
c.input();

cout<<endl;
u.display();
cout<<endl;
c.display();

cout<<"project info : "<<endl;
cout<<"project type : "<<type<<endl;
cout<<"duration : "<<dur<<endl;
cout<<"amount granted : "<<amtgranted<<endl;
}
};

int main()
{
project p;
p.input();
p.display();
return 0;
}
