#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int>> way(n + 1, vector<int>(0));
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        way.at(a).push_back(b);
        way.at(b).push_back(a);
    }

    queue<int> q;
    q.push(1);

    vector<int> dis(n + 1, -1), guide(n + 1);
    dis.at(1) = 0;

    int r;
    while(!q.empty()) {
        r = q.front();
        for (int i = 0; i < way.at(r).size(); i++) {
            if (dis.at(way.at(r).at(i)) == -1) {
                dis.at(way.at(r).at(i)) = dis.at(r) + 1;
                guide.at(way.at(r).at(i)) = r;
                q.push(way.at(r).at(i));
            }
            else {
                if (dis.at(r) + 1 >= dis.at(way.at(r).at(i))) continue;
                else {
                    dis.at(way.at(r).at(i)) = dis.at(r) + 1;
                    guide.at(way.at(r).at(i)) = r;
                    q.push(way.at(r).at(i));
                }
            }
        }
        q.pop();
    }
    bool tf = true;
    for (int i = 2; i <= n; i++) {
        if(dis.at(guide.at(i)) == dis.at(i) - 1) continue;
        else {
            tf = false;
            break;
        }
    }
    if (!tf) cout << "No" << endl;
    else {
        cout << "Yes" << endl;
        for (int i = 2; i <= n; i++) cout << guide.at(i) << endl;
    }
}