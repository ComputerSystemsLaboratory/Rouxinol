#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,s,e) for (int i=s;i<(e);i++)
#define All(v) (v).begin(),(v).end()
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define int long long
using namespace std;
typedef long long llint;
typedef pair<int, int> P;
const int MOD = (int)1e9 + 7;
const int INF = (int)1e18 * 5;

struct UnionFind
{
    vector< int > data;
    
    UnionFind(int sz){
        data.assign(sz, -1);
    }
    
    bool unite(int x, int y){
        x = root(x), y = root(y);
        if(x == y) return false;
        if(data[x] > data[y]) swap(x, y);
        data[x] += data[y];
        data[y] = x;
        return true;
    }
    
    int root(int k){
        if(data[k] < 0) return(k);
        return (data[k] = root(data[k]));
    }
    
    int size(int k){
        return -data[root(k)];
    }
};

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int dx[] = {-1, 0, 1};
    int dy[] = {-1, 0, 1};

    int w, h;
    cin >> w >> h;
    while(!(w==0 && h==0)){
        vector< vector<int> > c(h+2, vector<int>(w+2));
        REP(i, h) c[i][0] = 0;
        REP(i, h) c[i][w+1] = 0;
        REP(j, w) c[0][j] = 0;
        REP(j, w) c[h+1][j] = 0;
        FOR(i, 1, h+1)FOR(j, 1, w+1) cin >> c[i][j];

        int num = 10, unite = 0;
        UnionFind UF(500);
        FOR(i, 1, h+1)FOR(j, 1, w+1){
            int tmp = 0;
            if(c[i][j] == 0) continue;
            if(c[i][j] == 1) c[i][j] = ++num;
            for(auto y: dy)for(auto x: dx){
                if(x==1 && y==1) continue;
                if(c[i+y][j+x] == 0) continue;
                if(c[i+y][j+x] == 1){
                    c[i+y][j+x] = c[i][j];
                    tmp++;
                }else if(UF.root(c[i+y][j+x]) != UF.root(c[i][j])){
                    unite++;
                    UF.unite(c[i+y][j+x], c[i][j]);
                }
            }
        }

        //FOR(i, 1, h+1)FOR(j, 1, w+1) cout << c[i][j] << (j==w ? "\n":" ");

        cout << num - 10 - unite << "\n";
        cin >> w >> h;
    }
    return 0;
}
