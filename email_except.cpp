/*Write a C++ program to accept an email address and throw an exception if it does not contain
@ symbol.
*/

#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;

int main()
{
     string test;
     string email;
     bool isChar();
     bool isDigit();
     bool isValidEmailId(string);

     cout<<"\n Enter Email Id : ";
     cin>>email;
     test=email;
     try 
     {
          if(isValidEmailId(test) )
               cout<<"\n Email Id is Valid.";
          else
               throw 'c';  
     }
     catch(char c)   
     {
          cout<<"\n Exception Caught... \n Invalid Email Id!!!";
     }
     catch(...) 
     {
          cout<<"\n Default Exception";
     }
     return 0;
}
bool isChar(const char Character)
{
     return ( (Character >= 'a' && Character <= 'z') || (Character >= 'A' && Character <= 'Z'));
}
bool isDigit(const char Character)
{
     return ( Character >= '0' && Character <= '9');
}
bool isValidEmailId(string email)
{
    
     if(!isChar(email[0]))
          return 0;
     int AtOffset = -1;
     int DotOffset = -1;
     unsigned int Length=email.length();
     for(unsigned int i = 0; i < Length; i++)
     {
          if(email[i] == '@')
               AtOffset = (int)i;
          else if(email[i] == '.')
               DotOffset = (int)i;
     }
     if(AtOffset == -1 || DotOffset == -1)
          return 0;
     if(AtOffset > DotOffset)
          return 0;
     return !(DotOffset >= ((int)Length-1));
}
