#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
typedef long long ll;
typedef pair<int,int> P;

template<typename A,typename B> inline void chmin(A &a,B b){if(a>b) a=b;}
template<typename A,typename B> inline void chmax(A &a,B b){if(a<b) a=b;}

int dy[]={0,1,0,-1};
int dx[]={-1,0,1,0};
//-----------------------------------------------------------------------

int y[205],x[205];
int main()
{   
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    while(cin>>n,n)
    {
        int min_y,max_y,min_x,max_x;
        min_y=max_y=min_x=max_x=0;
        y[0]=x[0]=0;
        for(int i=1;i<n;i++){
            int k,d;
            cin>>k>>d;
            y[i]=y[k]+dy[d];
            x[i]=x[k]+dx[d];
            chmin(min_y,y[i]); chmax(max_y,y[i]);
            chmin(min_x,x[i]); chmax(max_x,x[i]);
        }
        cout<<max_x-min_x+1<<" "<<max_y-min_y+1<<endl;
    
    }
}