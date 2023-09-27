#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vint;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin() (x).end()
#define pb push_back

int n,q;
vint s,t;

bool linear_search(int x) {
    rep(i,n) if(s[i] == x) return true;
    return false;
}

int main() {
    cin>>n;
    rep(i,n) {
        int a; scanf("%d",&a);
        s.push_back(a);
    }
    cin>>q;
    rep(i,q) {
        int a; scanf("%d",&a);
        t.push_back(a);
    }

    int ans = 0;
    rep(i,q) {
        if(linear_search(t[i])) ans++;
    }

    cout << ans << "\n";

    return 0;
}