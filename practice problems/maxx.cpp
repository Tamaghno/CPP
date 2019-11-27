#include<iostream>
#include<cctype>
using namespace std;
class maxx
{
int a,b;
public :
void set()
{
cout<<"enter two numbers : ";
cin>>a>>b;
}
friend void compare(maxx,maxx);
void display(void);
};
void compare(maxx t, maxx q)
{
if(t.a>t.b)
cout<<"greater : "<<t.a;
else
cout<<"greater : "<<t.b;

if(q.a>q.b)
cout<<"greater : "<<q.a;
else
cout<<"greater : "<<q.b;

} 
void maxx::display(void)
{
cout<<"a = "<<a<<" b = "<<b;
}
int main()
{
maxx m,mm;
m.set();mm.set();
m.display();mm.display();
compare(m,mm);


return 0;

}

