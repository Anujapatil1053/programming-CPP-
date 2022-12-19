using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    cout << endl << "================***************================= "<< endl;

    cout << "Enter Any Number = ";
    cin >> No;

    for( i = 10; i >= 1; i--)
    {
        cout << No << " * "<< i << " = "<< No * i<< endl;
    }

    cout << endl << "================ Thank You ================= "<< endl;

    getch();
    return 0;


}

