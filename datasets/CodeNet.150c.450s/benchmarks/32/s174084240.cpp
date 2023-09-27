#include <bits/stdc++.h>
using namespace std;

int M, Nmin, Nmax;
vector<int> P;

void solve(){
    sort(P.rbegin(), P.rend());
    
    int gap = 0;
    int ans = -1;
    for(int i=Nmin-1; i<Nmax; i++){
        if(P[i]-P[i+1] >= gap){
            gap = P[i]-P[i+1];
            ans = i + 1;
        }
    }
    cout << ans << endl;
}

int main(){
    while(cin >> M >> Nmin >> Nmax, M|Nmin|Nmax){
        P.resize(M);
        for(auto &v: P)
            cin >> v;
        solve();
    }
}