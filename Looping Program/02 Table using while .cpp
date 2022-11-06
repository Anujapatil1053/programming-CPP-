using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    cout << "Enter Any Number = "<< endl;
    cin >> No;

    i = 1;

    while(i <= 10)
    {
        cout << No << " * " << i << " = "<< No * i<< endl;
        i++;
    }

    getch();
    return 0;
}
