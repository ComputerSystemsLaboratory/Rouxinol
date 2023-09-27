#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <list>
#include <stack>
#include <queue>
#include <cstdlib>
#include <tuple>
#define INF 1000000000
#define EPS 1e-9
using namespace std;

typedef list<int> L;
typedef pair <int,int> P;
typedef vector<int> V;
typedef queue<int> Q;
typedef stack<int> S;
typedef map<string,int> M;

int sum(V v, int num) {
    int res = 0;
    for (int i = 0; i < v.size(); i++)
        res += v[i];

    return res - num;
}

int main()
{
    int N, M;
    while (cin >> N >> M, (N && M)) {
        V n, m;
        for (int i = 0; i < N; i++) {
            int tmp;
            cin >> tmp;
            n.push_back(tmp);
        }
        for (int i = 0; i < M; i++) {
            int tmp;
            cin >> tmp;
            m.push_back(tmp);
        }

        P res = P(1000, 1000);
        for (int i = 0; i < m.size(); i++) {
            for (int j = 0; j < n.size(); j++) {
                if (sum(m, m[i] - n[j]) - sum(n, n[j] - m[i]) == 0)
                    if (res.first + res.second > n[j] + m[i])
                        res = P(n[j], m[i]);
            }
        }
        if (res.first == 1000)
            cout << -1 << endl;
        else
            cout << res.first << " " << res.second << endl;
    }

    return 0;
}