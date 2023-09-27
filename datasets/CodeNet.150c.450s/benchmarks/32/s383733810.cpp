#include <bits/stdc++.h>
using namespace std;

int m,mn,Mn,gap,ans;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> m >> mn >> Mn,m){
        vector<int> P(m);
        for (int i=0;i<m;++i) cin >> P[i];
        gap=0;
        for (int i=mn-1;i<Mn;++i){
            if (gap<=P[i]-P[i+1]){
                gap=P[i]-P[i+1],ans=i+1;
            }
        }
        cout << ans << endl;
    }
}
