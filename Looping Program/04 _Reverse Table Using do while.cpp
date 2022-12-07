using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    cout << endl << "================***************================= "<< endl;

    cout << "Enter Any Number = ";
    cin >> No;

    i = 10;

    do
    {
        cout << No << " * "<< i << " = "<< No * i <<endl;
        i--;
    }
    while(i >= 1);

    cout << endl << "================ Thank You ================= "<< endl;

    getch();
    return 0;


}
