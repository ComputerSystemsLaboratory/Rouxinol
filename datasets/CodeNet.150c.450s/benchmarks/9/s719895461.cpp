#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
    string c;
    int m;
    while (cin >> c, c != "-") {
        queue<char> q;
        REP(i, c.size()) q.push((char)c[i]);
        cin >> m;
        int n;
        REP(i, m) {
            cin >> n;
            REP(j, n) {
                q.push(q.front());
                q.pop();}}
        REP(i, c.size()) {
            cout << q.front();
            q.pop();}
        cout << endl;
    }
}