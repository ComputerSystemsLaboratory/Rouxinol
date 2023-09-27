#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
    int n;
    long sum = 0;
    cin >> n;
    map<int,int> d;
    rep(i,n){
        int a;
        cin >> a;
        d[a]++;
        sum += a;
    } 
    int q;
    cin >> q;
    rep(i,q){
        int b,c;
        cin >> b >> c;
        sum += (c-b)*d[b];
        d[c] += d[b];
        d[b] = 0;
        cout << sum << endl;
    }
}