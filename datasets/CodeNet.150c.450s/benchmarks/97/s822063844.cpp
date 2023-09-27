#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define mp make_pair
#define X first
#define Y second

typedef pair<int,int> P;
int dx[] = {-1,0,1,0}, dy[] = {0,-1,0,1};

void solve(int N) {
    int max_x=0, min_x=0, max_y=0, min_y=0;
    vector<P> data; 
    data.pb(mp(0,0));
    rep(i,N-1) {
        int n,d; cin>>n>>d;
        int x = data[n].X + dx[d];
        int y = data[n].Y + dy[d];
        data.pb(mp(x,y));
        max_x = max(max_x, x);
        max_y = max(max_y, y);
        min_x = min(min_x, x);
        min_y = min(min_y, y);
    }
    int width = max_x - min_x + 1;
    int height = max_y - min_y + 1;
    cout << width << " " << height << "\n";
}

int main() {
    int N;
    while(cin>>N, N) solve(N);
    return 0;
}