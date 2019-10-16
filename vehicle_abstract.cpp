//create a class vehicle and create other derived classes bus,car and bike from vehicle. With this program illustrate the utitility of abstract class.

#include<iostream>
using namespace std;
class Vehicle
{
public:
virtual void display()=0;
virtual void input()=0;
};
class Bus : public Vehicle
{
char n[10];
public:
void display()
{
cout<<"its a bus"<<endl;
}
void input()
{
cout<<"vehicle"<<endl;
cout<<"enter name" ;
cin>>n;

}
};
class Bike : public Vehicle
{
char n[10];
public:
void display()
{
cout<<"its a bike"<<endl;
}
void input()
{
cout<<"vehicle"<<endl;
cout<<"enter name" ;
cin>>n;

}
};
class Car : public Vehicle
{
char n[10];
public:
void display()
{
cout<<"its a car"<<endl;
}
void input()
{
cout<<"vehicle"<<endl;
cout<<"enter name" ;
cin>>n;
cout<<"name is "<<n<<endl;

}
};

int main()
{
Vehicle *v[3];

Bus b;
Bike bk;
Car c;

v[0]=&b;
v[0]->display();
v[0]->input();

v[1]=&bk;
v[1]->display();
v[1]->input();

v[2]=&c;
v[2]->display();
v[2]->input();

return 0;
}
