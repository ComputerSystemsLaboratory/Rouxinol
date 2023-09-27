#include <bits/stdc++.h>
using namespace std;

int main(){
    int D; cin >> D;
    vector<int> c(27,0);
    for(int i = 1; i < 27; i++) cin >> c[i];
    vector<vector<int>> s(D+1,vector<int>(27,0));
    for(int d = 1; d < D+1; d++){
        for(int i = 1; i < 27; i++) cin >> s[d][i];
    }
    
    vector<int> t(D+1);
    for(int i = 1; i < D+1; i++){
        cin >> t[i];
    }
    
    map<int,int> mp;
    
    int ans  = 0;
    for(int d = 1; d < D+1 ; d++){
        ans += s[d][t[d]];
        //cout << ans << endl;
        mp[t[d]] = d;
        for(int i = 1; i < 27; i++)ans -= c[i]*(d -mp[i]);
        cout << ans << endl;
        
    }
    
    
    
}