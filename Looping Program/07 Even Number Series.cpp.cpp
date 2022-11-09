using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0, Cnt = 0;

    cout << endl <<"Enter Positive Integer Number = " << endl;
    cin >> No;

    cout << "Even Number Series = "<< endl;

    for(Cnt = 1; Cnt <= No; Cnt++)
    {
        if(Cnt % 2 == 0)
        {
            cout << Cnt << endl;
        }
    }

    getch();
    return 0;
}
