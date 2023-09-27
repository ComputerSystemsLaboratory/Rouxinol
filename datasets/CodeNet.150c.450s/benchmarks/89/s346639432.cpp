#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

const int max_n=1000001;
bool is_prime[max_n];
int prime[max_n];
int sieve(int n){
    int p=0;
    rep(i,n+1) is_prime[i]=true;
    is_prime[0]=is_prime[1]=false;
    FOR(i,2,n+1){
        if(is_prime[i]){
            prime[p++]=i;
            for(int j=2*i;j<=n;j+=i) is_prime[j]=false;
        }
    }
    return p;
}
int main(){
    sieve(1000000);
    int a,d,n;
    while(cin>>a>>d>>n,a){
        int cnt=1;
        while(1){
            if(is_prime[a]){
                if(cnt==n){
                    cout<<a<<endl;
                    break;
                }
                ++cnt;
            }
            a+=d;
        }
    }
    return 0;
}
