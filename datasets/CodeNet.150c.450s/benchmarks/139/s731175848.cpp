#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
//#define cerr if(false) cerr
#ifdef DEBUG
#define show(...) cerr << #__VA_ARGS__ << " = ", debug(__VA_ARGS__);
#else
#define show(...) 42
#endif
using namespace std;
using ll = long long;
using pii = pair<int, int>;
template <typename T, typename S>
ostream& operator<<(ostream& os, pair<T, S> a) {
    os << '(' << a.first << ',' << a.second << ')';
    return os;
}
template <typename T>
ostream& operator<<(ostream& os, vector<T> v) {
    for (auto x : v) os << x << ' ';
    return os;
}
void debug() {
    cerr << '\n';
}
template <typename H, typename... T>
void debug(H a, T... b) {
    cerr << a;
    if (sizeof...(b)) cerr << ", ";
    debug(b...);
}
vector<vector<int>> g;
int main(){
    int n, m;
    cin >> n >> m;
    g.resize(n);
    rep(i,m){
        int a, b;
        cin >> a >> b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int>dist(n,INT_MAX);
    dist[0] = 0;
    queue<int>q;
    q.push(0);
    while(q.size()){
        int x = q.front();
        q.pop();
        for(auto v: g[x]){
            if(dist[v]!=INT_MAX)continue;
            dist[v] = dist[x] + 1;
            q.push(v);
        }
    }
    cout << "Yes" << endl;
    for(int i = 1; i < n; i++){
        for(auto x : g[i]){
            if(dist[i] == dist[x] + 1){
                cout << x + 1 << "\n";
                break;
            }
        }
    }
    
}
