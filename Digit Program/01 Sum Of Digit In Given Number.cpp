#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int No = 0,Dsum = 0 , Dig = 0,Temp = 0;
  
  cout<< "Enter Any Number = \n";
  cin>>No;
  
  Temp = No;
  
  while(Temp > 0)
  {
    Dig  = Temp%10;
    Dsum = Dsum + Dig;
    Temp = Temp/10;
    
  }
  
  cout<<"Sum Of Digit In Given Number"<< Dsum << endl;
  
  getch();
  return 0;
}