#include <iostream>
using namespace std;

int main()
{
    int m, r, f;
    while (cin >> m >> f >> r)
    {
        if (m == -1 && f == -1 && r == -1)
        {
            break;
        }
        else if (m == -1 || f == -1)
        {
            cout << "F\n";
        }
        else if (m + f >= 80)
        {
            cout << "A\n";
        }
        else if (m + f >= 65 && (m + f < 80))
        {
            cout << "B\n";
        }
        else if (m + f >= 50 && (m + f < 65))
        {
            cout << "C\n";
        }
        else if (m + f >= 30 && (m + f < 50))
        {
            if (r >= 50)
            {
                cout << "C\n";
            }
            else
            {
                cout << "D\n";
            }
        }
        else if (m+f<30){
            cout << "F\n";
        }
    }
}
