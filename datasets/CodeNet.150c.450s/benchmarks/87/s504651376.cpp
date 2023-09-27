#include <bits/stdc++.h>
using namespace std;
const long double PI = acos(-1);
typedef long long ll;
typedef pair<int64_t,int64_t> pll;
int dx[]={1,-1,0,0,1,-1,1,-1};
int dy[]={0,0,1,-1,1,-1,-1,1};
#define rep(i,a,b) for (int64_t i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
#define ALL(a) begin(a),end(a)
#define sz(s) (s).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
int n;
int sam[]={7,14,28,15,30,31};

vector<vector<int> >a(11,vector<int>(5));
void reset()
{
    REP(k,5)
    {
        REP(i,n)
        {
            if(a[i][k]==0)
            {
                for(int j=i;j>0;j--)
                {
                    swap(a[j][k],a[j-1][k]);
                }
            }
        }
    }
}


int main()
{
    while(cin>>n,n)
    {
        REP(i,n)REP(j,5)cin>>a[i][j];
        bool flag=1;
        int sum=0;
        while(flag)
        {
            flag=0;
            REP(i,n)
            {
                int now=a[i][0];int times=1;int last;
                rep(j,1,5)
                {
                    if(a[i][j]==a[i][j-1])
                    {
                        times++;
                    }else if(times>=3)
                    {
                        last=j-1;
                        break;
                    }else{
                        now=a[i][j];
                        times=1;
                    }
                    if(j==4)last=j;
                }
                if(times>=3&&now!=0)
                {
                    sum+=times*now;
                    flag=1;
                    for(int k=last;k>last-times;k--)a[i][k]=0;
                    //cout<<"!!"<<last<<"!!"<<endl;
                }
            }
            reset();
            //cout<<"..................."<<endl;REP(i,n){REP(j,5)cout<<a[i][j]<<" ";cout<<endl;}
        }
        cout<<sum<<endl;
    }
}
