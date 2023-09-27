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
    int n,a,b;
    while(cin>>n>>a>>b,n){
        vi s(n);
        int ans=-1,t=-1;
        rep(i,n){
            cin>>s[i];
            if(a<=i && i<=b && t<=s[i-1]-s[i]){
                t=s[i-1]-s[i];
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
}