#include <iostream>
using namespace std;

//Compiler version g++ 6.3.

int main()
{
        int No = 0, zCnt = 0, Temp = 0, Dig = 0;

        Up:
        cout << "\n Enter a Number = " << endl;
        cin >> No;

        Temp = No;

        while(Temp > 0)
        {
                Dig = Temp % 10;
                if(Dig == 0)
                {
                        zCnt++;
                }
                Temp = Temp /10;
        }

        cout << "\n Zero Count in " << No << " = " << zCnt << endl;

        getch();
        return 0;
}
