#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a(3);
    int N;
    cin >> N;
    while (N--) {
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << (a[0]*a[0] + a[1]*a[1] == a[2]*a[2] ? "YES" : "NO") << endl;
    }
    return 0;
}