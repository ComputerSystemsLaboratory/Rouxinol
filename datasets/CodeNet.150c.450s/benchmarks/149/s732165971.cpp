#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define rrep(i,n) for(int i=n-1; i>=0; i--)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long double lb;

const int INF=1<<27;
const int MOD=(int)1e9+7;

int parent[100010];
int depth[100010];

int find_root(int x)
{
    if(parent[x] == x) return x;
    else return find_root(parent[x]);
}

void unite(int x, int y)
{
    int x_root = find_root(x);
    int y_root = find_root(y);
    if(depth[x_root] < depth[y_root]){
        parent[x_root] = y_root;
        depth[y_root] = max(depth[y_root], depth[x_root]+1);
    }else{
        parent[y_root] = x_root;
        depth[x_root] = max(depth[y_root]+1, depth[x_root]);
    }
    return;
}

int same(int x, int y)
{
    if(find_root(x) == find_root(y)) return 1;
    else return 0;
}

int main(void)
{
    int n, q;
    cin >> n >> q;
    int query, x, y;

    // init
    rep(i,n){
        parent[i] = i;
        depth[i] = 0;
    }

    // query
    rep(i,q) {
        cin >> query >> x >> y;
        if(query == 0) unite(x, y);
        else if(query == 1) cout << same(x, y) << endl;
    }
    return 0;
}