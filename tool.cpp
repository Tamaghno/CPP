#include<iostream>
using namespace std;
class tool
{
public:
int srength;
char type;
void setstrength(int s)
{
strength=s;
}
};
class rock : public tool
{
public:
rock(int str)
{
tool::setstrength(str);
type='r';
}
bool fight(tool x)
{
if(x.type=='s')
return 2*strength>x.strength;
id(x.type=='p')
return strength/2>x.strength;

}
};
class paper : public tool
{
public:
paper(int str)
{
tool::setstrength(str);
type='p';
}
bool fight(tool x)
{
if(x.type=='r')
return 2*strength>x.strength;
id(x.type=='s')
return strength/2>x.strength;

}
};
class scissor : public tool
{
public:
scissor(int str)
{
tool::setstrength(str);
type='s';
}
bool fight(tool x)
{
if(x.type=='p')
return 2*strength>x.strength;
id(x.type=='r')
return strength/2>x.strength;

}
};
int main()
{

tool t;
rock a(1);
paper b(1);
scissor s(1);
cout<<"rock vs scissor";
if(a.fight(c))
cout<<"rock wins";
else
cout<<"scissors wins";
return 0;
}
