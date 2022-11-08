using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    cout << endl << "================***************================= "<< endl;

    cout << endl << "Enter Any Number = ";
    cin >> No;

    i = 10;

    while(i >= 1)
    {
        cout << No << " * "<< i << " = "<< No * i<< endl;
        i--;
    }

    cout << endl << "================ Thank You ================= "<< endl;

    getch();
    return 0;


}
