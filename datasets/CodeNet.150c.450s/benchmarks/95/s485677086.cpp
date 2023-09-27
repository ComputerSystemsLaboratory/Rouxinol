#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define REP(i,m,n) for(int i=(m);i<(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const ll inf=1e9+7;
const ll mod=998244353;
int main(){
    while(1){
        ll n;cin>>n;
        if(n==0)break;
        ll cnt=0;
        vector<bool>leg(2);
        int ii=1;
        rep(i,n){
            string s;cin>>s;
            if(s=="lu"){
                leg[0]=1;
            }if(s=="ru"){
                leg[1]=1;
            }if(s=="ld"){
                leg[0]=0;
            }if(s=="rd"){
                leg[1]=0;
            }
            if(leg[0]==ii&&leg[1]==ii){
                cnt++;
                ii=1-ii;
            }
        }
        cout<<cnt<<endl;
    }
}
