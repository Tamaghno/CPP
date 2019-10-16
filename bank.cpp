#include<iostream>
#include<cstring>
using namespace std;
class bank
{
char name[20];
int ano;
char atype[20];
float bal;
public:
void get(int no,char *n,char *t,float b)
{
strcpy(name,n);
ano=no;
strcpy(atype,t);
bal=b;
}
float deposit()
{
float amt;
cout<<"\n Enter amount: ";
cin>>amt;
bal=bal+amt;
return bal;
}
float withdrw()
{
float amt;
cout<<"\n How many Rupees withdraw: ";
cin>>amt;
bal=bal-amt;
return bal;
}
void disp()
{
cout<<"\n\n Account number: "<<ano;
cout<<"\n\n Name: "<<name;
cout<<"\n\n Account type: "<<atype;
cout<<"\n\n Deposit Amount: "<<deposit();
cout<<"\n\n After Withdraw Amount balance: "<<withdrw();
}
};

int main()
{
int n;
char nm[20],t[20];
float a;
bank bk;
cout<<"\n Enter Account no.: "; 
cin>>n;
cout<<"\n Enter Name: "; 
cin>>nm;
cout<<"\n Enter account type: "; 
cin>>t;
cout<<"\n Enter balance amount: ";
cin>>a;
bk.get(n,nm,t,a);
bk.disp();
return 0;
}

