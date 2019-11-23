/*Write a C++ program with the following:
a) a function to read two double type numbers from key board
b) a function to calculate the division of these two numbers
c) a try block to throw an exception when wrong type of data is keyed in
d) a try block to detect and throw an exception if the condition “divide-by-zero” occurs
e) appropriate catch block to handle the exceptions thrown*/


#include <iostream>

using namespace std;

class number_except
{
    double a,b;
    public:
    void read()
    {
        cout<<"\nEnter two double type numbers:";
        cin>>a>>b;
    }
    void div()
    {
        try{

            if(cin.fail())
                throw "Bad input!";
            if( b == 0 )
            throw 0;

            cout<<"\nAns is "<<a/b;
        }
        catch(const int n)
        {
            cout << "\nDivision by " << n << " not allowed\n";
        }
        catch(const char* Str)
        {
            cout<< Str;
        }
    }
};

int main()
{
    number_except k;
    k.read();
    k.div();
    return 0;
}
