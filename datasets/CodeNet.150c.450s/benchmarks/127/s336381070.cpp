#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main(void) {
    int m; cin >> m;
    while (m--) {
        string str; cin >> str;

        set<string> trains;
        int n = str.size();
        for (int i = 1; i <= n; i++) {
            string sp = str.substr(0, i), sn = str.substr(i, n-i);

            trains.insert(sn+sp);
            reverse(sn.begin(), sn.end());
            trains.insert(sp+sn);
            trains.insert(sn+sp);
            reverse(sp.begin(), sp.end());
            trains.insert(sp+sn);
            trains.insert(sn+sp);
            reverse(sn.begin(), sn.end());
            trains.insert(sp+sn);
            trains.insert(sn+sp);
        }

        cout << trains.size() << endl;
    }

    return 0;
}