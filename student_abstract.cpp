//wap with student as abstract class and create derived class engineering, medical, science from base class student. Create the objects of the derived class and process them and access them using array of pointer type base class tsudent .

#include<iostream>
using namespace std;
class Student
{
public:
virtual void getdata()=0;
virtual void display()=0;
};

class Engineering:public Student
{
int r;
char n[10];
public:
void getdata()
{
cout<<"faculty -> engg"<<endl;
cout<<"enter name ";
cin>>n;
cout<<"enter roll ";
cin>>r;
}

void display()
{
cout<<endl<<"name = "<<n;
cout<<endl<<"roll = "<<r<<endl<<endl;
}
};

class Medical:public Student
{
int r;
char n[10];
public :
void getdata()
{
cout<<"faculty -> medical"<<endl;
cout<<"enter name ";
cin>>n;
cout<<"enter roll :";
cin>>r;
}
void display()
{
cout<<endl<<"name ="<<n;
cout<<endl<<"roll ="<<r<<endl;
}
};

class Science:public Student
{
int r;
char n[10];
public:
void getdata()
{
cout<<"faculty -> science"<<endl;
cout<<"enter name" ;
cin>>n;
cout<<"enter roll :";
cin>>r;
}
void display()
{
cout<<endl<<"name ="<<n;
cout<<endl<<"roll ="<<r<<endl;
}
};

int main()
{
Student *p[3];

Engineering e;
Medical m;
Science s;

p[0]=&e;
p[0]->getdata();
p[0]->display();

p[1]=&m;
p[1]->getdata();
p[1]->display();

p[2]=&s;
p[2]->getdata();
p[2]->display();

return 0;
}


