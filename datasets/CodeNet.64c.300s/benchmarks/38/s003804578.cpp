#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define INF 1000000
using namespace std;
int num[10];
bool check(int pos, int l, int r){
    if(pos >= 10) return true;
    if(l < num[pos]) if(check(pos+1,num[pos],r)) return true;
    if(r < num[pos]) if(check(pos+1,l,num[pos])) return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    rep(i,n){
        rep(j,10) cin >> num[j];
        if(check(0,-1,-1)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
