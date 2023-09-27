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
        int n,p,cnt[50]={0};
        cin>>n>>p;
        if(n==0 && p==0) break;
     
        int t=p;
        while(true)
        {
            REP(i,n){
                if(t>0) t--,cnt[i]++;
                else t+=cnt[i],cnt[i]=0;
                if(t==0 && cnt[i]==p){
                    cout<<i<<endl;
                    goto g;
                }
            }
        }
        g:;
    }

}