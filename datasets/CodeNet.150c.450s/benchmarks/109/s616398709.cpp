#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1000000007;
#define INF 1LL<<30
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()

int main(){
    while(1){
        int n;
        cin>>n;
        if(n==0) return 0;

        vector<int> imos(90000,0);
        rep(i,n){
            string s,t;
            cin>>s>>t;

            int t1=0;
            t1+=60*60*10*(s[0]-'0')+60*60*(s[1]-'0');
            t1+=60*10*(s[3]-'0')+60*(s[4]-'0');
            t1+=10*(s[6]-'0')+(s[7]-'0');
            t1++;
            int t2=0;
            t2+=60*60*10*(t[0]-'0')+60*60*(t[1]-'0');
            t2+=60*10*(t[3]-'0')+60*(t[4]-'0');
            t2+=10*(t[6]-'0')+(t[7]-'0');
            t2++;

            imos[t1]++;
            imos[t2]--;
        }
        rep(i,90000){
            if(i) imos[i]+=imos[i-1];
        }

        int ans=0;
        rep(i,90000) ans=max(ans,imos[i]);

        cout<<ans<<endl;
    }
}

