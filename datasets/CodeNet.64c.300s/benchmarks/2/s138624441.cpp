#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, f, r;
    while (cin >> m >> f >> r) {
        if (m == -1 && f == -1 && r == -1) break;

        if (m == -1 || f == -1) {
            cout << 'F' << endl;
            continue;
        }

        int sum = m + f;
        char c;
        if (sum < 30) c = 'F';
        else if (sum >= 80) c = 'A';
        else if (sum >= 65) c = 'B';
        else if (sum >= 50) c = 'C';
        else {
            if (r >= 50) c = 'C';
            else c = 'D';
        }
        cout << c << endl;
    }
}

