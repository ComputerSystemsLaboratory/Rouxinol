#include <iostream>
using namespace std;

void new_call(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << " " << i;
            continue;
        }

        if (i % 10 == 3)
        {
            cout << " " << i;
            continue;
        }

        int x = i / 10;
        bool found = false;
        while (x > 0)
        {
            if (x % 10 == 3)
            {
                cout << " " << i;
                found = true;
            }
            if (found)
            {
                break;
            }
            x = x / 10;
        }
    }
    cout << endl;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    new_call(n);

    return 0;
}

