//Write a program to create a class shape with functions to find area of and display the name of the shape and other essential component of the class. Create derived classes circle, rectangle and trapezoid each having overridden functions area and display. Write a suitable program to illustrate virtual functions


#include<iostream>
using namespace std;
class shape
{
            protected:
            float aoc,aor,aot,r,l,b,b1,b2,h;
            public:
            virtual void area()
            {
            }
            virtual void display()
            {
            }
};
class circle:public shape
{
            public:
            void area()
            {
                        cout<<"\nEnter radius of the circle:";
                        cin>>r;
                        aoc=3.14159*r*r;
            }
            void display()
            {
                        cout<<"\nArea of circle:"<<aoc;
            }
};
class rectangle:public shape
{
            public:
            void area()
            {
                        cout<<"\n\nEnter length and breadth of the rectangle:";
                        cin>>l>>b;
                        aor=l*b;
            }
            void display()
            {
                        cout<<"\nArea of rectangle:"<<aor;
            }
};
class trapezoid:public shape
{
            public:
            void area()
            {
                        cout<<"\n\nEnter height of the trapezoid:";
                        cin>>h;
                        cout<<"\nEnter length of each base(b1,b2) of the trapezoid:";
                        cin>>b1>>b2;
                        aot=((b1+b2)/2)*h;
            }
            void display()
            {
                        cout<<"\nArea of trapezoid:"<<aot;
            }
};
int main()
{
          
            shape *shapeptr;
            shape s;
            shapeptr=&s;
            shapeptr->area();
            shapeptr->display();
            circle c;
            rectangle r;
            trapezoid t;
            shapeptr=&c;
            shapeptr->area();
            shapeptr->display();
            shapeptr=&r;
            shapeptr->area();
            shapeptr->display();
            shapeptr=&t;
            shapeptr->area();
            shapeptr->display();
            return 0;

}
