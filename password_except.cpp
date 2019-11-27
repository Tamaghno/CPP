#include<iostream>
#include<string.h>
#include<cctype>
#include<ctype.h>
#include<cstring>
using namespace std;

int main()
{
    string pass;
    cout<<"enter password :";
    cin>>pass;
    try
    {
       if(pass.length()<6)
       throw 'c';
       int i;
       bool dig=false;
       bool alpha=false;
       bool spc=false;
       unsigned int l=strlen(pass);
       for(i=0;i<l;i++)
       {
           if(isdigit(pass[i]))
           dig=true;
           if(isalpha(pass[i]))
           alpha=true;
           if((pass[i]>=32 && pass[i]<=47) || (pass[i]>=58 && pass[i]<=64) || (pass[i]>=91 && pass[i]<=96) || (pass[i]>=123 && pass[i]<=126))
           spc=true;
       }
       if(!(dig==true && alpha==true && spc==true))
       throw 'c';
       else
       {
           cout<<"correct format password"<<endl;
       }
       
    }
    catch(char c)
    {
        cout<<"not correct";
    }
    catch(...)
    {
        cout<<"default exception";
    }
    
}
