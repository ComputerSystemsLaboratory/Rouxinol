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

    int n;
    while(cin>>n,n)
    {
        int ans=0;
        bool l=false,r=false,f=true;
        REP(i,n){
            string s; cin>>s;
            if(s=="lu") l=true;
            else if(s=="ru") r=true;
            else if(s=="ld") l=false;
            else r=false;

            if(l==r && l==f){ 
                ans++;
                f=!f;
            }
        }   
        cout<<ans<<endl;
    }       
} 