#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <list>
#include <numeric>
#include <queue>
#include <string>
#include <vector>
#define rep(i, x, n) for(int i = x; i < n; i++)
using namespace std;
const long long INF = 1LL << 60;
const int ININF = 1000000;
using pint = pair<int, int>;
using Edge = pair<long long, pint>; //<cost,<u,v>>の形
vector<Edge> edges;

int N, M, s;

vector<long long> d; //最短距離

//どこかに負の閉路が存在する場合はtrue
bool find_negative_loop() {
    rep(i, 0, N) {
        rep(j, 0, M) {
            Edge e = edges[j];
            long long cost = e.first;
            int to = e.second.second;
            int fr = e.second.first;
            if(d[to] > d[fr] + cost) {
                d[to] = d[fr] + cost;
                if(i == N - 1) {
                    return true;
                }
            }
        }
    }
    return false;
}
//ベルマンフォード法で最短経路を求める（負の辺がある場合）
//到達可能な負の閉路がある場合はfalseを返す
bool shortest_path(int start) {
    rep(i, 0, N) { d[i] = INF; }
    d[start] = 0LL;
    rep(i, 0, N) {
        bool update = false;
        rep(j, 0, M) {
            Edge e = edges[j];
            long long cost = e.first;
            int to = e.second.second;
            int fr = e.second.first;
            if(d[fr] != INF && d[to] > d[fr] + cost) {
                d[to] = d[fr] + cost;
                update = true;
            }
        }
        if(!update) {
            break;
        }
        if(i == N - 1) {
            return false;
        }
    }
    return true;
    ;
}
int main() {
    cin >> N >> M >> s;
    d.assign(N, 0);
    rep(i, 0, M) {
        int a, b, c;
        cin >> a >> b >> c;
        // b--;
        // c--;
        edges.push_back(make_pair(c, make_pair(a, b)));
    }
    if(!shortest_path(s)) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {

        rep(i, 0, N) {
            if(d[i] != INF) {
                cout << d[i] << endl;
            } else {
                cout << "INF" << endl;
            }
        }
    }
}

