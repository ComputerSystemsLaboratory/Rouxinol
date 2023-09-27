#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(void){
    int n, r;
    while(cin >> n >> r && n && r) {
        vector<int> card(n);
        vector<int> tmp(n);
        rep(i, n) card[i] = n-i;
        rep(i, r) {
            int p, c;
            cin >> p >> c;
            rep(j, n) tmp[j] = card[j];
            rep(j, c) tmp[j] = card[p-1+j];
            rep(j, p-1) tmp[c+j] = card[j];
            rep(j, n) card[j] = tmp[j];
        }
        cout << card[0] << endl;
    }
}