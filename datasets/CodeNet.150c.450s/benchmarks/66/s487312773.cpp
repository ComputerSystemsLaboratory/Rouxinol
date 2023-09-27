#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    vector<string> vn(N);
    for (auto& i : vn) cin >> i;
    cin >> M;

    bool flag = false;
    while (M--) {
        string s;
        cin >> s;
        if (find(vn.begin(), vn.end(), s) != vn.end()) {
            if (flag) cout << "Closed by " << s << endl;
            else cout << "Opened by " << s << endl;

            flag = !flag;
        } else {
            cout << "Unknown " << s << endl;
        }
    }

    return 0;
}

