#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    int n, A[20];
    cin >> n;
    for(int i=0;i<n;i++) cin >> A[i];
    int q, m[200];
    cin >> q;
    for(int i=0;i<q;i++) cin >> m[i];

    unordered_set<ll> S;

    for(int i=0;i<(1<<n);i++){
        ll s=0;
        for(int j=0;j<n;j++){
            if((i>>j)&1) s+=A[j];
        }
        S.insert(s);
    }

    for(int i=0;i<q;i++){
        if(S.count(m[i])>0) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    
    return 0;
}
