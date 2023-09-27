#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back

typedef long long ll;
typedef pair<int,int> P;

//-----------------------------------------------------------------------

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,m;
    while(cin>>n>>m,n|m)
    {
        int cnt[11]={0};
        int sum=0;
        REP(i,n){
            int d,p; cin>>d>>p;
            cnt[p]+=d,sum+=p*d;
        }

        for(int i=10;i>=0;i--){
            if(m>cnt[i]){
                m-=cnt[i];
                sum-=i*cnt[i];
            } else{
                sum-=i*m;
                break;
            }
        }
        cout<<sum<<endl;
    }
}
