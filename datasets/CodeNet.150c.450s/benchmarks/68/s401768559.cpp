#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    while (cin >> n, n) {
        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int mi = 999999999;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (mi > abs(s[i] - s[j])) {
                    mi = abs(s[i] - s[j]);
                }
            }
        }
        cout << mi << endl;
    }
}