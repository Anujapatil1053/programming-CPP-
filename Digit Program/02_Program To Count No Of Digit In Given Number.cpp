#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int No = 0,Dcnt = 0,Temp = 0;
    
    cout<<"Enter A Number "<< endl;
    cin>>No;
    
    Temp = No;
    
    while(Temp > 0)
    {
      Temp = Temp/10;
      Dcnt++;
    }
    
    cout<<"Digit Count In Given Number"<< Dcnt;
    
    getch();
    return 0;
}