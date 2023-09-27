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
        int n,r,A[50];
        cin>>n>>r;
        if(n==0 && r==0) break;

        REP(i,n) A[i]=n-i;
        REP(i,r){
            int p,c;
            vector<int> v;
            cin>>p>>c;
            p--;
            for(int i=p;i<p+c;i++) v.pb(A[i]);
            for(int i=0;i<p;i++) v.pb(A[i]);
            for(int i=p+c;i<n;i++) v.pb(A[i]);
            REP(i,n) A[i]=v[i];
        }
        cout<<A[0]<<endl;

    }
}