#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map <string,ll> mp;
ll num[5];
int main() {
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        string s;
        cin>>s;
        mp[s]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++){
        if(i->first=="AC")  num[1]=i->second;
        if(i->first=="WA")  num[2]=i->second;
        if(i->first=="TLE")  num[3]=i->second;
        if(i->first=="RE")  num[4]=i->second;
    }
    for(ll i=1;i<=4;i++){
        if(i==1)    cout<<"AC x "<<num[i]<<endl;
        if(i==2)    cout<<"WA x "<<num[i]<<endl;
        if(i==3)    cout<<"TLE x "<<num[i]<<endl;
        if(i==4)    cout<<"RE x "<<num[i]<<endl;
    }
    return 0;
}
