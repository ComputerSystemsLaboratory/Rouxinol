#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
using msi=map<string,int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

int main(void){
    int n;
    while(cin>>n,n){
        vi s(n);
        int ans=1000000000;
        rep(i,n){
            cin>>s[i];
        }
        sort(all(s));
        rep(i,n-1){
            ans=min(ans,s[i+1]-s[i]);
        }
        cout<<ans<<endl;
    }
}