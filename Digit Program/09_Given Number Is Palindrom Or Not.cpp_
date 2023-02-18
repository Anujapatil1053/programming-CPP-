using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0,Dig = 0,Rev = 0,Temp = 0;

    cout<< "Enter A Number = " << endl;
    cin>>No;

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        Rev = (Rev * 10) + Dig;
        Temp = Temp /10;
    }
    if(No == Rev)
    {
        cout  << " \n\n"<< No << " Is Palindrome "<< endl;
    }
    else
    {
        cout << " \n\n "<< No << " Is Not Palindrome "<< endl;
    }

    getch();
    return 0;
}
