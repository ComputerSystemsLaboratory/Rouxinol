#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long
#define pi 3.14159265359
using namespace std;

int main()
{
    IOS;
    ll n,x,q,b,c,s=0;
    cin>>n;
    map<int,int> m;
    while(n--){
        cin>>x;
        s+=x;
        m[x]++;
    }
    cin>>q;
    while(q--){
        cin>>b>>c;
        s=s+(c-b)*m[b];
        m[c]+=m[b];
        m[b]=0;
        cout<<s<<'\n';
    }
    return 0;
}
