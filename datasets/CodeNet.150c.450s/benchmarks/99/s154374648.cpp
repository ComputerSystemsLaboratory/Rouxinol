#include<bits/stdc++.h>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
const int inf = 1e9;
typedef long long ll;
typedef pair<ll,int> P;
typedef set<int> S;
ll n;
char cc[]={'m','c','x','i'};
int ci[]={1000,100,10,1};
int change(string s){
    int ans=0;
    int now=0;
    bool ok=0;
    for(int i=0;i<s.size();i++){
        ok=0;
        for(int j=0;j<4;j++){
            if(s[i]==cc[j]){
                ok=1;
                if(now==0) ans+=ci[j];
                else ans+=now*ci[j];
                now=0;
            }
        }
        if(!ok) now=now*10+s[i]-'0';
    }
    return ans;
}
void change2(int n){
    if(n>=1000){
        if(n/1000==1) cout<<"m";
        else cout<<n/1000<<"m";
        n%=1000;
    }
    if(n>=100){
        if(n/100==1) cout<<"c";
        else cout<<n/100<<"c";
        n%=100;
    }
    if(n>=10){
        if(n/10==1) cout<<"x";
        else cout<<n/10<<"x";
        n%=10;
    }
    if(n>=1){
        if(n==1) cout<<"i";
        else cout<<n<<"i";
    }
    cout<<endl;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        string s,t;
        cin>>s>>t;
        change2(change(s)+change(t));
    }
    return 0;
}
