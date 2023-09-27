#include <bits/stdc++.h>
using namespace std;

int a, L;

void fill_zero(string &s) {
    while ((int)s.size() < L) {
        s = "0" + s;
    }
}

int main() {
    while (cin >> a >> L, L) {
        string s = to_string(a);
        fill_zero(s);
        
        map<string, int> mp;
        int cnt = 1;
        while (true) {
            if (mp.find(s) != mp.end()) {
                cout << mp[s] - 1 << " " << stoi(s) << " " << cnt - mp[s] << endl;
                break;
            }
            mp[s] = cnt++;
            string a, b;
            a = b = s;
            sort(a.begin(), a.end());
            sort(b.rbegin(), b.rend());
            s = to_string(stoi(b) - stoi(a));
            fill_zero(s);
        }
    }
}
