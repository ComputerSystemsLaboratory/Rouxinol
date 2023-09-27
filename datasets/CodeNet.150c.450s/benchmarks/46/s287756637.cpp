#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    while (cin >> n >> x) {
        if (n == 0 && x == 0) break;
        int count = 0;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                for (int k = j + 1; k < n; k++)
                    if (i + j + k + 3 == x)
                        count += 1;
        cout << count << endl;
    }
}

