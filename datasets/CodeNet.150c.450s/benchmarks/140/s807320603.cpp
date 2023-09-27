#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>
#include <iomanip>
#include <stack>

typedef long long ll;
const ll MOD = 1e9 + 7;
const long long INF = 1LL<<50;
const double PI=3.14159265358979323846;
const int NMAX=100005;
using namespace std;

struct UnionFind{
    int root[10010];
    int w[10010];

    UnionFind(){
        for(int i = 0; i < 10010; i++){
            root[i] = i;
            w[i] = 0;
        }
    }

    int getRoot(int n){
        if(root[n] == n) return n;
        else return (root[n] = getRoot(root[n]));
    }

    void merge(int x, int y, int aw){
        if(w[x] < w[y]) swap(x,y);
        int ry = getRoot(y);
        int rx = getRoot(x);
        root[ry] = rx;
        w[rx] += w[ry];
        w[rx] += aw;
    }

    bool isSame(int x, int y){
        if(getRoot(x) == getRoot(y)){
            return true;
        }
        return false;
    }

    int getWeight(int n){
        int rn = getRoot(n);
        return w[rn];
    }
};

int main(){
    int v,e;
    cin >> v >> e;
    vector<pair<int, pair<int,int> > > edge;
    for(int i = 0; i < e; i++){
        int s,t,w;
        cin >> s >> t >> w;
        edge.push_back(make_pair(w,make_pair(s,t)));
    }

    UnionFind uf;
    sort(edge.begin(),edge.end());

    for(int j = 0; j < edge.size(); j++){
        int s = edge[j].second.first;
        int t = edge[j].second.second;
        int w = edge[j].first;
        if(uf.isSame(s,t) == false){
            uf.merge(s,t,w);
        }
    }

    cout << uf.getWeight(1) << endl;

    return 0;
}
