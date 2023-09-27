#include <iostream>
using namespace std;

int a[30];

int main()
{
    for (int i = 0; i < 28; i++)
    {
        int p;
        cin >> p;
        p--;
        a[p]++;
    }

    for (int i = 0; i < 30; i++)
    {
        if (a[i] == 0)
        {
            cout << i + 1 << endl;
        }
    }
}
