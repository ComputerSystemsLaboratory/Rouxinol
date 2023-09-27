#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
#define rep(i, n) for (int i = 0; i < n; i++)
using Graph = vector<vector<int>>;
using pint = pair<int, int>;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int dxx[8] = {1, 1, 1, 0, 0, -1, -1, -1}, dyy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    priority_queue<int> pq;
    int x;
    string s;
    while (1) {
        cin >> s;
        if (s == "end") break;
        if (s == "insert") {
            cin >> x;
            pq.push (x);
        } else {
            x = pq.top();
            pq.pop();
            cout << x << "\n";
        }
    }
}
