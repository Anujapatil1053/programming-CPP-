#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
        int No = 0, Temp = 0, Dig = 0, OCnt = 0;
        
        cout << "\n Enter a Number = " << endl;
        cin >> No;

        Temp = No;

        while(Temp > 0)
        {
                Dig = Temp % 10;
                if(Dig % 2 == 1)
                {
                        OCnt++;
                }
                Temp = Temp / 10;
        }


        cout << "\n Odd Number Count in " << No << " = " << OCnt << endl;

        getch();
        return 0;
}
