using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    cout << endl << "Enter The Find The Number Is Prime OR Not = "<< endl;
    cin >> No;

    for(i = 2; i < No; i++)
    {
        if(No % i == 0)
        {
            break;
        }
    }
    if(i == No)
    {
        cout <<endl << "Given Number Is "<< No << " Is Prime Number."<< endl;
    }
    else
    {
        cout << endl << "Given Number Is "<< No << " Is Not Prime Number."<< endl;
    }

    getch();
    return 0;
}
