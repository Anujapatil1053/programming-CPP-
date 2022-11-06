using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0,i = 0;

    cout << " Enter Any Number = "<< endl;
    cin >> No;

    i = 1;

    do
    {
        cout << No << " * "<< i << " = "<< No * i <<endl;
        i++;
    }
    while(i <= 10);

    getch();
    return 0;

}
