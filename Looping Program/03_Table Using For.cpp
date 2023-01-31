using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    cout << " Enter Any Number ="<< endl;
    cin >> No;

    for(i = 1; i <= 10 ; i++)
    {
        cout << No << " * "<< i << " = "<< No * i<< endl;
    }

    getch();
    return 0;
}



