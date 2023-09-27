// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A
// Kruskal's algorithm
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct node { int root, rank; node(): root(-1), rank(1) {} };

int root(vector<node> &U, int r)
{
        int a = r;
        while (U[a].root >= 0)
                a = U[a].root;
        while (U[r].root >= 0) {
                int s = U[r].root;
                U[r].root = a;
                r = s;
        }
        return r;
}

bool same(vector<node> &U, int a, int b)
{
        int ra = root(U, a), rb = root(U, b);
        return ra == rb;
}

void unite(vector<node> &U, int a, int b) {
        int ra = root(U, a), rb = root(U, b);
        if (U[ra].rank < U[rb].rank) {
                U[ra].root = rb;
                U[rb].rank = max(U[rb].rank, U[ra].rank + 1);
        }
        else {
                U[rb].root = ra;
                U[ra].rank = max(U[ra].rank, U[rb].rank + 1);
        }
}

int main(int arg, char **argv)
{
        int V, E;
        cin >> V >> E;
        vector<pair<int, pair<int, int>>> A(E);
        for (int i = 0; i < E; i++) {
                int s, t, w;
                cin >> s >> t >> w;
                A[i] = { w, { s,  t } };
        }
        sort(A.begin(), A.end());
        vector<node> U(V);
        int sum = 0;
        for (auto &a: A) {
                if (same(U, a.second.first, a.second.second)) 
                        continue;
                sum += a.first;
                unite(U, a.second.first, a.second.second);
        }
        cout << sum << endl;
        return 0;
}