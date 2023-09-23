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
        int n; cin>>n;
        if(n==0) break;

        int comb[1001]={0};
        for(int i=1;i<=n/2;i++){
            int sum=i;
            for(int j=i+1;(sum+=j)<=n;j++) comb[sum]++;
        }
        cout<<comb[n]<<endl;
    }
}