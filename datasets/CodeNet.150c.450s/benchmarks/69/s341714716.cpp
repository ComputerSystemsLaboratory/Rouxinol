#include <iostream>
#include <algorithm>
 
using namespace std;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int ball[10], lb[10], rb[10];

bool dfs(int n, int l, int r) {
    if(n==10) {
        rep(i, l-1) if(lb[i] > lb[i+1]) return false;
        rep(i, r-1) if(rb[i] > rb[i+1]) return false;
        return true;
    }
    lb[l] = ball[n];
    bool hoge = dfs(n+1, l+1, r);
    rb[r] = ball[n];
    bool fuga = dfs(n+1, l, r+1);
    if(hoge || fuga) return true;
    else return false;
}

int main(void){
    int N;
    cin >> N;
    rep(loop, N) {
        rep(i, 10) cin >> ball[i];
        if(dfs(0, 0, 0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}