#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

#define vi vector<int>
#define pb push_back

typedef long long ll;
using namespace std;



int main(){
    int n;
    while(cin >> n,n) {
        int tmp;
        vi a;
        rep(i,n){
            cin >> tmp;
            a.pb(tmp);
        }
        sort(a.begin(),a.end());
        int mn = a[1] - a[0];
        rep(i,n - 1) mn = min(mn,a[i + 1] - a[i]);
        cout << mn << endl;
    }
    return 0;
}

