#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[100];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int x = n - 1; x >= 0; x--)
    {
        if (x == n - 1)
        {
            cout << a[x];
        }
        else
        {
            cout << " " << a[x];
        }        
    }

    cout << endl;

    return 0;
}

