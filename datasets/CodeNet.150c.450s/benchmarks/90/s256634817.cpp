#include <bits/stdc++.h>

using namespace std;

int main()
{    
    int N, mx = 0; 
    map<int, int> mp;
    while (cin >> N) {
        mx = max(mx, ++mp[N]);
    }
    for (auto &v: mp) {
        if (v.second == mx) {
            cout << v.first << endl;
        }
    }        
    return 0;
}