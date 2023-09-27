#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (1) {
        int n;
        cin >> n;
        if (!n) break;
        vector<int> imosu(90000, 0);
        for (int i = 0; i < n; i++) {
            string start, end;
            cin >> start >> end;
            int s = stoi(start.substr(0, 2)) * 3600 + stoi(start.substr(3, 2)) * 60 + stoi(start.substr(6, 2));
            int e = stoi(end.substr(0, 2)) * 3600 + stoi(end.substr(3, 2)) * 60 + stoi(end.substr(6, 2));
            imosu[s] += 1;
            imosu[e] -= 1;
        }
        for (int i = 1; i < imosu.size(); i++) {
            imosu[i] = imosu[i] + imosu[i - 1];
            // cout << imosu[i - 1];
        }
        // cout << endl;
        int ans = 0;
        for (auto i : imosu)
            ans = max(i, ans);
        cout << ans << endl;
    }
}
