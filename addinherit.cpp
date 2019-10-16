#include<iostream>
using namespace std;

class University         //Base Class
{
        protected:
                char name[20], dept[20],person[20];
        public:	
                void acceptA()
                {
                        cout<<"\n Enter University : ";
                        cin>>name;
                        cout<<"\n Enter department : ";
                        cin>>dept;
			cout<<"\n Enter person : ";
                        cin>>person;
                }
		void displayA()
                {
                        cout<<"\n university : "<<name;
			cout<<"\n dept : "<<dept;
			cout<<"\n person : "<<person;
                }
};

class Company        //Base Class
{
        protected:
                char name[20];
		int n,amt;
        public:	
                void acceptB()
                {
                        cout<<"\n Enter Company : ";
                        cin>>name;
                        cout<<"\n Enter engineers : ";
                        cin>>n;
			cout<<"\n Enter amount invested : ";
                        cin>>amt;
                }
		void displayB()
                {
                        cout<<"\n Company : "<<name;
			cout<<"\n engineers : "<<n;
			//cout<<"\n amount invested : "<<amt;
                }
};

class Project: public University, public Company   //Class Addition – Derived Class
{
      

        protected:
                char type[20];
		int dur,amtg;
        public:	
                void accept()
                {
                        cout<<"\n Enter project Type : ";
                        cin>>type;
                        cout<<"\n Enter duration : ";
                        cin>>dur;
			cout<<"\n Enter amount granted : ";
                        cin>>amtg;
                }
		void display()
                {
                        cout<<"\n Type: "<<type;
			cout<<"\n Duration : "<<dur;
			cout<<"\n Amount Granted : "<<amtg;
                }
};

int main()
{
        Project a;
        a.acceptA();
        
	a.acceptB();       
	
	a.accept();
	
	a.displayA();
	a.displayB();
	a.display();
	
        return 0;
}


