#include<bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int>vint;
typedef pair<int,int>pint;
typedef vector<pint>vpint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define all(v) (v).begin(),(v).end()
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
template<typename A,typename B>inline void chmin(A &a,B b){if(a>b)a=b;}
template<typename A,typename B>inline void chmax(A &a,B b){if(a<b)a=b;}

int f[1000000];

signed main(){
    fill_n(f,1000000,1);
    f[0]=f[1]=0;
    for(int i=2;i<1000000;i++){
        if(!f[i])continue;
        for(int j=i+i;j<1000000;j+=i)f[j]=0;
    }
    for(int i=1;i<1000000;i++)f[i]+=f[i-1];

    int n;
    while(cin>>n)cout<<f[n]<<endl;
    return 0;
}