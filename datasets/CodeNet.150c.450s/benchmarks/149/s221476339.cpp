#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define INF 999999999
#define INF_M 2147483647
#define pb(a) push_back(a)

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<pii> VP;

int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};

int uf[10001];

int find(int x) {
        if(uf[x] == x) return x;
        else return uf[x] = find(uf[x]);
}

bool same(int x, int y) {
        return find(x) == find(y);
}

void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if(same(x,y)) return;
        else uf[x] = y;
}

int main() {
    int n,q;
    cin >> n >> q;
    
    rep(i,0,n) uf[i] = i;
    
    int com, x, y;
    rep(i,0,q) {
        cin >> com >> x >> y;
        if(com == 0) { //unite
                unite(x,y);
        }
        
        else if(com == 1) { //same
                cout << same(x,y) << endl;
        }
    }
    return 0;
}