#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF 99999999
#define eps 1e-9

int main(){
    int n,m;
    while(cin>>n>>m&&n&&m){
        map<int,int> mn,mm;
        int a[2000],b[2000];
        rep(i,n) cin>>a[i];
        rep(i,m) cin>>b[i];
        
        rep(i,n){
            int t=0;
            for(int j=i;j<n;j++){
                t+=a[j];
                mn[t]++;
            }
        }
        rep(i,m){
            int t=0;
            for(int j=i;j<m;j++){
                t+=b[j];
                mm[t]++;
            }
        }
        int sum=0;
        for(auto &x:mn){
            sum+=x.second*mm[x.first];
        }
        cout<<sum<<endl;
    }
}