#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
        int No = 0, Temp = 0, Dig = 0, ECnt = 0;

        cout << "\n Enter a Number = " << endl;
        cin >> No;

        Temp = No;
        while(Temp > 0)
        {
                Dig = Temp % 10;
                if(Dig % 2 == 0 && Dig != 0)
                {
                    ECnt++;
                }
                Temp = Temp / 10;
        }


        cout << "\n Even Count in " << No << " = " << ECnt << endl;

        getch();
        return 0;
}
