#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main()
{   
    int n, q;
    cin >> n >> q;

    queue<pair<string, int>> Q;
    pair<string, int> p;

    for (int i = 0; i < n; i++) {
        cin >> p.first >> p.second;
        Q.push(p);
    }

    int time = 0;

    while (!Q.empty()) {

        if (Q.front().second <= q) {
            time += Q.front().second;
            cout << Q.front().first << " " << time << endl;
            Q.pop();
        }

        else {
            time += q;
            Q.push(make_pair(Q.front().first, Q.front().second - q));
            Q.pop();
        }
    }
}
