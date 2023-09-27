#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
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
        vector<int> v(n);
        REP(i,n) cin>>v[i];
        sort(ALL(v));

        int diff=1e9;
        REP(i,v.size()-1){
            diff=min(diff,v[i+1]-v[i]);
        }
        cout<<diff<<endl;
    }
}