//Create a class called time that has separate int member data for hours, minutes and seconds. One constructer should initialize it to 0, and another should it initialize it fixed values. A member function should display it in 11:59:59 format.  The final member function should add two objects of type time passed as arguments.
//A main () should create two initialized time objects and one that is not initialized. Then it should add two initialized values together, leaving the result in the third time variable. Finally it should display the value of this third variable.





#include<iostream>
using namespace std;
class times
{
  private:
   int hr,min,sec;
  public:
   times()
    { }
   times(int h,int m,int s)
   {
     hr=h;
     min=m;
     sec=s;
   }
  void display()
   {
     cout<<hr<<":"<<min<<":"<<sec;
   }
  void add(times t1,times t2)
  {
     sec=t1.sec+t2.sec;
     min=t1.min+t2.min;
     hr=t1.hr+t2.hr;

     if(sec>=60)
     {
       min++;
       sec-=60;
     }

     if(min>=60)
      {
       hr++;
       min-=60;
      }
    
   }

};
int main()
{
  times t(00,00,00);
  cout<<"\ninitial time is: ";
  t.display();
  times t1(12,40,50);
  cout<<"\ntime 1 is: ";
  t1.display();
  times t2(10,15,40);
  cout<<"\ntime 2 is: ";
  t2.display();
  t.add(t1,t2);
  cout<<"\nfinal added time is: ";
  t.display();
  return 0;
}

