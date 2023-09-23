#include <bits/stdc++.h>
using namespace std;

void call(int);

int main() {
    int n;
    cin >> n;
    
    call(n);
    
    return 0;
}

void call(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << " " << i;
            continue;
        }
        else if (i % 10 == 3 || (i / 10) % 10 == 3 || (i / 100) % 10 == 3 || (i / 1000) % 10 == 3 || (i / 10000) % 10 == 3)
        {
            cout << " " << i;
            continue;
        }
    }
    cout << endl;
}
