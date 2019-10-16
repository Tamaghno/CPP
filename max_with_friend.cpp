//Write a program to find the maximum  of two numbers using friend function.


#include<iostream>
using namespace std;

class Test {
private:
   int x, y;
public:

   void input() {
       cout << "Enter Two Numbers :";
       cin >> x>>y;
   }

   friend void find(Test t);
};

void find(Test t) {
   if (t.x > t.y) {
       cout << "\nThe Largest is :" << t.x;
   } else {
       cout << "\nThe Largest is :" << t.y;
   }
}

int main() {

   Test t;
   t.input();
   find(t);

   return 0;
}
