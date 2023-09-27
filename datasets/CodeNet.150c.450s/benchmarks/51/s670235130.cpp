#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    bool used[31] = {};
    for (int i = 0; i < 28; i++) {
        cin >> x;
        used[x] = 1;
    }

    for (int i = 1; i <= 30; i++) {
        if (!used[i]) cout << i << endl;
    }
    return 0;
}