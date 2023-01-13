using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    int No = 0,F_Dig = 0,Dig = 0, Cnt = 0,Temp = 0;

    cout<<"Enter A Positive Integer Number =";
    cin >> No;

    cout <<"Enter Number for counting = "<< endl;
    cin >> F_Dig;

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        if(Dig  == F_Dig)
        {
            Cnt++;
        }
        Temp = Temp /10;
    }

    cout << " Count  Of  " << F_Dig<< " in " << No << " = "<< Cnt  << endl;

    getch();
    return 0;
}

