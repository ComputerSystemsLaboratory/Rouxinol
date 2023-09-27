#include <iostream>
#include <algorithm>
#include <vector>

#define rep(i,n) for(int i = 0; i < n; i++)
#define rrep(i,n) for(int i = n - 1; i >= 0; i--)
#define REP(i,k,n) for(int i = k; i < n; i++)

#define vi vector<int>
#define pb push_back
using namespace std;

int main(){
    int n,r,p,c;
    vi v(51,0);
    vi t(51,0);
    while(cin >> n >> r,n != 0) {
        rep(i,n) v[i] = n - i;
        rep(i,r){
            cin >> p >> c;
            rep(j,c) t[j] = v[p - 1 + j];
            rrep(j,p) v[j + c - 1] = v[j - 1];
            rep(j,c) v[j] = t[j];
        }
        cout << v[0] << endl;
    }
    return 0;

}

