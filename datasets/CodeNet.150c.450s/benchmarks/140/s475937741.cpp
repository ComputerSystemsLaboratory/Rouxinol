#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#include <queue>
#include <stack>
#include <climits>
#include <map>
#include <set>

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;
const int inf = 1e9;
const long long INF = 1LL << 60;   // INFの値は1152921504606846976

struct UnionFind{
    vector<int> rank,p,size;
    UnionFind(int n){
        rank.resize(n,0);
        p.resize(n,0);
        size.resize(n,0);
        for(int i = 0; i < n; i++){
            p[i] = i;
            rank[i] = 0;
            size[i] = 1;
        }
    }
    bool same(int x,int y){
        return root(x) == root(y);
    }
    int root(int x){
        if(x != p[x]){
            p[x] = root(p[x]);
        }
        return p[x];
    }
    bool unite(int x,int y){
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return false;
        if(rank[rx] > rank[ry]){
            p[ry] = rx;
            size[rx] += size[ry];
        }else{
            p[rx] = ry;
            size[ry] += size[rx];
            if(rank[rx] == rank[ry]){
                rank[ry]++;
            }
        }
        return true;
    }
    int tree_size(int x){
        return (size[root(x)]);
    }
};

vector<pair<int,pair<int,int> > > vec;

int main()
{
    int v,e;
    cin >> v >> e;
    for(int i = 0; i < e; i++){
        int s,t,w;
        cin >> s >> t >> w;
        vec.push_back(make_pair(w,make_pair(s,t)));
    }
    sort(vec.begin(),vec.end());
    UnionFind uf(v);
    ll ans = 0;
    for(int i = 0; i < e; i++){
        pair<int,pair<int,int> > p = vec[i];
        if(!uf.same(p.second.first,p.second.second)){
            uf.unite(p.second.first,p.second.second);
            ans += p.first;
        }
    }
    cout << ans << endl;
}
