#include <iostream>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>

using namespace std;

typedef long long signed int ll;

constexpr ll NIL = -20000000000;

int n,m,q,s,t,z[100000];
vector<pair<int,int>> w;

void dfs(int n,int c) {
    z[n] = c;
    auto r = lower_bound(w.begin(),w.end(),make_pair(n,0));
    auto l = lower_bound(w.begin(),w.end(),make_pair(n+1,0));
    for(auto itr = r;itr != l;itr++) if(z[itr->second] != c)dfs(itr->second,c);
}

int main() {
    for(int i = 0;i < 100000;i++)z[i] = -1;
    cin >> n >> m;
    for(int i = 0;i < m;i++) {
        cin >> s >> t;
        w.push_back(make_pair(s,t));
        w.push_back(make_pair(t,s));
    }
    sort(w.begin(),w.end());
    cin >> q;
    int cc = 1;
    for(int i = 0;i < q;i++) {
        cin >> s >> t;
        if(z[s] == -1) dfs(s,cc++);
        if(z[s] == z[t]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

