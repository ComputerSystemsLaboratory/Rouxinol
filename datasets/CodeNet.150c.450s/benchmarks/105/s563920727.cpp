#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll ,int>
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn =504;
ll n,m,t;
ll a[maxn];
string s;
int main(){
    ios::sync_with_stdio(false);
//    #ifdef NK
//        freopen("in.txt","r",stdin);
//    #endif
    cin>>t;
    while(t--){
        vector<ll>b;
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        cin>>s;
        s="#"+s;
        int ok=1;
        for(int i=n;i;i--){
            ll v=a[i];
            for(ll x:b){
                v=min(v,v^x);
            }
            if(s[i]=='1'){

                if(v){
                    ok=0;
                    break;
                }
            }else{
                b.push_back(v);
            }

        }
        cout<<(ok?"0\n":"1\n");
    }

    return 0;
}
