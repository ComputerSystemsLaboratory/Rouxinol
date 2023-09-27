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
using namespace std;
#define pi pair<int32,int32>
#define pl pair<int64,int64>
#define chmax(a,b) (a<b ? a=b:0)
#define chmin(a,b) (a>b ? a=b:0)
#define en cout << endl //セミコロンつけろ
//#define MM 1000000000
//#define MOD MM+7
const int MM = 1e9;
const int MOD = MM+7;
const long double PI = acos(-1);
const long long INF = 1e15;
int dx[8] = {-1,0,1,0,-1,-1,1,1};
int dy[8] = {0,-1,0,1,-1,1,1,-1};
// 'A' = 65, 'Z' = 90, 'a' = 97, 'z' = 122
template<typename T>
T GCD(T u,T v){
    return v ? GCD(v,u%v) : u;
}
template<typename T>
T LCM(T x,T y){
    T gc = GCD(x,y);
    return x*y/gc;
}

struct edge {int from,to,cost;};
int N,M,S;
vector<edge> v;
int dist[100010];

void Bellman(){
    fill(dist,dist+100010,MM);
    dist[S] = 0;
    for(int i = 0; i < N; i++){
        int update = 0;
        for(int j = 0; j < M; j++){
            edge e = v[j];
            if (dist[e.from] != MM && dist[e.to] > dist[e.from] + e.cost){
                dist[e.to] = dist[e.from] + e.cost;
                update = 1;
                if (i == N-1){
                    cout << "NEGATIVE CYCLE" << endl;
                    return;
                }
            }
        }
        if (!update) break;
    }
    for(int i = 0; i < N; i++){
        if (dist[i] == MM) cout << "INF" << endl;
        else cout << dist[i] << endl;
    }
    return;
}

int main(){
    cin >> N >> M >> S;
    for(int i = 0; i < M; i++){
        int a,b,c; cin >> a >> b >> c;
        v.push_back({a,b,c});
    }
    Bellman();
}
