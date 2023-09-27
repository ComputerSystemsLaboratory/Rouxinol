#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
#include <climits>
using namespace std;

int prim(vector<vector<int> >& A)
{
    int sum = 0;
    bool on[A.size()];
    for (int i = 0; i < A.size(); i++) {
        on[i] = false;
    }

    // pair<cost, node>
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > PQ;
    PQ.push(make_pair(0, 0));
    while (!PQ.empty()) {
        pair<int, int> edge = PQ.top();
        PQ.pop();
        if (on[edge.second]) continue;
        on[edge.second] = true;
        sum += edge.first;
        for (int i = 0; i < A.size(); i++) {
            if (on[i] || A[edge.second][i] < 0) continue;
            PQ.push(make_pair(A[edge.second][i], i));
        }
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int> > A(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    cout << prim(A) << endl;
    return 0;
}