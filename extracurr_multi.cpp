//extracurricular marks of a student using multi level inheritance

#include<iostream>
using namespace std;

class student
{
public:
char name[255]; int roll;

void get_details()
{cout<<"name : ";cin>>name;
cout<<"roll : ";cin>>roll;
}
void display_details()
{cout<<"\n name : "<<name;
cout<<"\t roll : "<<roll;
}
};

class exam:public student
{
public:
int test1,test2;
void get_marks()
{get_details();
cout<<"enter test 1 marks : ";cin>>test1;
cout<<"enter test 2 marks : ";cin>>test2;
}

float cal_average()
{return (test1+test2)/2.0;}

void display_average()
{
display_details();
cout<<"\n average marks : "<<cal_average();
}
};

class extracurricular:public student
{
public:
int painting,music;
void get_score()
{cout<<"painting score : ";cin>>painting;
cout<<"music score : ";cin>>music;
}
void display_total()
{
cout<<"\t painting + music score : "<<(painting+music);
}
};
class result:public exam,public extracurricular
{
public:
float total;
void cal_total()
{
float m1=cal_average();
float m2=(painting+music)/2.0;
total=(m1+m2)/2.0;
}
void comment()
{
cal_total();
if(total>=40.0)
cout<<"passed : "<<total<<"%";
else 
cout<<"\n student didnt pass : "<<total<<"%";
}
};
int main()
{
result r;
r.get_marks();
r.get_score();
r.display_average();
r.display_total();
r.comment();
return 0;
}
