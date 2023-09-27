#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define lop(i,a,b) for(ll i=a;i<b;i++)
using namespace std;

void func(){
    int n,x,q,b,c;
    ll sum=0;
    cin>>n;
    unordered_map<int,int>a;
    lop(i,0,n){
        cin>>x;
        a[x]++;
        sum+=x;
    }
    cin>>q;
    while(q--){
        cin>>b>>c;
        sum+=a[b]*(c-b);
        a[c]+=a[b];
        a[b]=0;
        cout<<sum<<endl;
    }
}

int main(){
    fastio;
    int t=1;
    //cin>>t;
    while(t--){
        func();
    }
}