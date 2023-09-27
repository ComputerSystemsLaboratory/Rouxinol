#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
typedef long long ll;
typedef pair<int,int> P;

template<typename A,typename B> inline void chmin(A &a,B b){if(a>b) a=b;}
template<typename A,typename B> inline void chmax(A &a,B b){if(a<b) a=b;}

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
//-----------------------------------------------------------------------

int x[205],y[205];

int main()
{   
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    while(cin>>n,n)
    {
        x[0]=y[0]=0;
        for(int i=1;i<n;i++)
        {
            int k,d;
            cin>>k>>d;
            x[i]=x[k]+dx[d];
            y[i]=y[k]+dy[d];
        }
        cout<<*max_element(x,x+n)-*min_element(x,x+n)+1<<" "
            <<*max_element(y,y+n)-*min_element(y,y+n)+1<<endl;
    }   
}