#include <iostream>
#include <cstring>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

void solve(int n) {
    int place[21][21];
    memset(place, 0, sizeof(place));
    rep(i,n) {
        int x,y; cin>>x>>y;
        place[y][x] = 1;
    }

    int m; cin >> m;
    int x=10, y=10;
    place[y][x] = 0;
    rep(i,m) {
        char d;
        int l;
        cin >> d >> l;
        rep(j,l) {
            if(d == 'N') y++; 
            if(d == 'S') y--;
            if(d == 'E') x++;
            if(d == 'W') x--;
            place[y][x] = 0;
        }
    }

    bool f = true;
    rep(i,21) rep(j,21) if(place[i][j] == 1) f = false;
    cout << (f ? "Yes" : "No") << "\n";
    return ;
}

int main() {
    for(int n;cin>>n && n;) solve(n);
    return 0;
}