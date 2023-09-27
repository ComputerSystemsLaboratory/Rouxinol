#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a);i<int(b);i++)
#define rep(i,b) loop(i,0,b)

int a[110], b[110];
int n,m;

bool chk(){
    int s = 0, t = 0;
    rep(i,n) s += a[i];
    rep(i,m) t += b[i];
    return s == t;
}

int main(){
    while(cin >> n >> m && n){
        rep(i,n) cin >> a[i];
        rep(i,m) cin >> b[i];
        sort(a,a+n); sort(b,b+m);
        int x = -1, y = -1;
        rep(i,n)rep(j,m)if(x == -1){
            swap(a[i], b[j]);
            if(chk()) x = i, y = j;
            swap(a[i], b[j]);
        }
        if(x != -1){
            cout << a[x] << " " << b[y] << endl;
        } else {
            cout << -1 << endl;
        }
    }
}