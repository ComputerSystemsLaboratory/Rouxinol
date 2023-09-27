#include <bits/stdc++.h>
using namespace std;

int n,ans,now;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> n,n){
        ans=0,now=0;
        for (int i=0;i<n;++i){
            string next; cin >> next;
            if (next[0]=='l') now^=1;
            if (next[0]=='r') now^=2;
            if (now==3) ++ans,now=0;
        }
        cout << ans << endl;
    }
}
