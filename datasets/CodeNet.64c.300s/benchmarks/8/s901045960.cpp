#include <iostream>

using namespace std;

void call(int n)
{
    int x;
    for (int i = 1; i <= n; i++)
    {
        x = i;
        if (x % 3 == 0)
        {
            cout << " " << i;
            continue;
        }
        while (true)
        {
            if (x % 10 == 3)
            {
                cout << " " << i;
                break;
            }
            x /= 10;
            if (x == 0)
            {
                break;
            }
        }
    }
    cout << endl;
}

int main()
{
    int h;
    while (cin >> h)
    {
        call(h);
    }
}