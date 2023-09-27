#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v),end()
#define pb push_back
typedef long long ll;
typedef pair<int,int> P;

template<typename A,typename B> inline void chmin(A &a,B b){if(a>b) a=b;}
template<typename A,typename B> inline void chmax(A &a,B b){if(a<b) a=b;}
//-----------------------------------------------------------------------

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(true)
    {
        int n,m,s1[100],s2[100];
        int sum1=0,sum2=0;

        cin>>n>>m;
        if(n==0 && m==0) break;

        REP(i,n) cin>>s1[i],sum1+=s1[i];
        REP(i,m) cin>>s2[i],sum2+=s2[i];

        int a=1e9,b=1e9;
        REP(i,n) REP(j,m){
            if(sum1-s1[i]+s2[j]==sum2+s1[i]-s2[j]){
                if(s1[i]+s2[j]<a+b) a=s1[i],b=s2[j];
            }
        }
        if(a==1e9) cout<<-1<<endl;
        else cout<<a<<" "<<b<<endl;
    }
}