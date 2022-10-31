#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int No = 0,Rev = 0, Dig = 0,Temp = 0;
    
    cout<<"Enter A Number "<< endl;
    cin>>No;
    
    Temp = No;
    
    while(Temp > 0)
    {
      Dig  = Temp%10;
      Rev = (Rev*10)+Dig;
      Temp = Temp/10;
      
    }
    
    cout<<"Reverse Of Given Number"<< Rev;
    
    getch();
    return 0;
}