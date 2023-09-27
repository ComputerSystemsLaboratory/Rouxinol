#include <iostream>
#include<map>
using namespace std;
typedef long long ll;
ll n,s[26],d[365][26],t[365],ans;
map<ll,ll> mp;
int main(void){
    cin>>n;
    for(int i=0;i<26;i++)mp[i]=0;
    for(int i=0;i<26;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            cin>>d[i][j];
        }
    }
    for(int i=0;i<n;i++){cin>>t[i];}
    for(int i=0;i<n;i++){
        ans+=d[i][t[i]-1];
        mp[t[i]-1]=i+1;
        for(int j=0;j<26;j++){
            ans-=s[j]*(i+1-mp[j]);
        }
        cout<<ans<<endl;
    }
}
