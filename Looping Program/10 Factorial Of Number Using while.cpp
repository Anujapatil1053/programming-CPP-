using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int Num = 0, Fact = 1, Temp = 0;

    cout << endl <<" Enter A Number = ";
    cin>>Num;

    Temp = Num;

    while(Temp > 1)
    {
        Fact = Fact * Num;
        Temp--;
    }
    cout <<" factorial Of "<< Num << " = " << Fact << endl;

    getch();
    return 0;

}
