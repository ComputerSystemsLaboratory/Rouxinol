#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <stack>
#include <numeric>
#include <algorithm>
#include <tuple>
#include <stdio.h>
#include <bitset>
#include <limits.h>
#include <complex>
#include <deque>
#include <iomanip>
#include <list>
#include <cstring>
using namespace std;
#define pi pair<int,int>
#define pl pair<long long,long long>
#define chmax(a,b) (a<b ? a=b:0)
#define chmin(a,b) (a>b ? a=b:0)
#define en cout << endl //セミコロンつけろ
//#define MM 1000000000
//#define MOD MM+7
typedef long long ll;
const int MM = 1e9;
const int MOD = MM+7;
const long double PI = acos(-1);
const long long INF = 1e15;
int dx[8] = {-1,0,1,0,-1,-1,1,1};
int dy[8] = {0,-1,0,1,-1,1,1,-1};
// 'A' = 65, 'Z' = 90, 'a' = 97, 'z' = 122

template<typename T> //最大公約数
T GCD(T u,T v){
    return v ? GCD(v,u%v) : u;
}
template<typename T> //最小公倍数
T LCM(T x,T y){
    T gc = GCD(x,y);
    return x*y/gc;
}

struct Edge
{
    int to, cost;
};
struct Node
{
    int from, to, cost;
};
vector<vector<int> > g(0), revG(0);
vector<int> order(0), marker(0);

void dfs(int num, int count){
    queue<int> que;
    que.push(num);
    while (que.size()){
        int now = que.front();
        marker[now] = count;
        que.pop();
        for (int i = 0; i < g[now].size(); i++){
            int to = g[now][i];
            if (marker[to] == 0){
                que.push(to);
            }
        }
    }
}

int main(){
    int N,M; cin >> N >> M;
    g.resize(N);
    marker.assign(N, 0);
    for (int i = 0; i < M; i++){
        int s, t; cin >> s >> t;
        g[s].push_back(t);
        g[t].push_back(s);
    }
    int Q; cin >> Q;
    vector<int> uu(Q), vv(Q);
    for (int i = 0; i < Q; i++){
        int u, v; cin >> u >> v;
        uu[i] = u; 
        vv[i] = v;
    }

    int count = 1;
    for (int i = 0; i < N; i++){
        if (marker[i] == 0){
            dfs(i, count);
            count++;
        }
    }
    for (int i = 0; i < Q; i++){
        if (marker[uu[i]] == marker[vv[i]]){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
