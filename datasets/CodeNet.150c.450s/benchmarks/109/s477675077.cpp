#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define int long long
typedef pair<int,int> P;

//-----------------------------------------------------------------------

signed main()
{   
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    while(cin>>n,n){
        vector<P> vec;
        REP(i,2*n){
            int h,m,s;
            char c;
            cin>>h>>c>>m>>c>>s;
            int time=3600*h+60*m+s;
            vec.push_back(P(time,(i+1)%2));
        }
        sort(ALL(vec));

        int ans=0,cnt=0;
        REP(i,2*n){
            if(vec[i].second){
                cnt++;
                ans=max(ans,cnt);
            }else{
                cnt--;
            }
        }
        cout<<ans<<endl;
    }
}

