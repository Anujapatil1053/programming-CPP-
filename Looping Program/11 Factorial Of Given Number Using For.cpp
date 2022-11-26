using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int Num = 0, Fact = 0, Temp = 0;

    cout << endl <<" Enter A Number = ";
    cin>>Num;

    Temp = Num;

    for(Fact = 1; Temp = Num;  Temp > 1; Temp--)
    {
        Fact = Fact * Num;
    }

    cout <<" factorial Of "<< Num << " = " << Fact << endl;

    getch();
    return 0;

}
