#include <bits/stdc++.h>
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
using namespace std;
int main(){
       
    cin.tie(0);
    ios::sync_with_stdio(false);
       
    int n;
    cin >> n;
      
    REP(i, n){
        vector<int> vc(3);
        for(auto &x : vc){
            cin >> x;
        }
        sort(vc.begin(), vc.end());
        cout << ( vc[0]*vc[0] + vc[1]*vc[1] == vc[2]*vc[2] ? "YES" : "NO" ) << endl;
    }
    return 0;
}