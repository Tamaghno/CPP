#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;

int main()
{
string dob;
cout<<"enter D.O.B : "<<endl;
cin>>dob;
//cout<<dob.length();
try{
        if(dob.length()!=10)
        {
         //cout<<"\n enter in dd/mm/yyyy format\n"<<endl;
            throw 'c';
        }
       
        int i;
        for(i=0;i<dob.length();i++)
        {
            if(i==2 || i==5)
            {
                if(dob[2]!='/' || dob[5]!='/')
                throw 'c';
            }
            else if(isdigit(dob[i])==false)
            {   
                cout<<"haha only digits";
                throw 'c';
            }
        }
        //if(i==dob.length())
        cout<<"\nVALID EMAIL\n"<<endl;

    }
catch(char c)
{
    cout<<"\n enter in dd/mm/yyyy format\n Invalid format"<<endl;
}
catch(...)
{
    cout<<"default exception"<<endl;
}
    return 0;
}
