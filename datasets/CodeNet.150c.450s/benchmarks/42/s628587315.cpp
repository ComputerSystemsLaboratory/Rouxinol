#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, q, time, cnt_time = 0;
    string name;
    queue<pair<string, int> > que;
    cin >> n >> q;
    REP(i, n) {
        cin >> name >> time;
        que.push(make_pair(name, time));
    }
    while (!que.empty()) {
        pair<string, int> top = que.front();
        que.pop();
        if (top.second <= q) {
            cnt_time += top.second;
            cout << top.first << " " << cnt_time << endl;
        } else {
            cnt_time += q;
            que.push(make_pair(top.first, top.second - q));
        }
    }
}
