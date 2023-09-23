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
	int n,m;
	cin>>n;
	if(n==0) break;

	bool f[21][21]={0};
	REP(i,n){
	    int x,y;
	    cin>>x>>y;
	    f[x][y]=true;
	}

	cin>>m;
	int cnt=0;
	int x=10,y=10;
	REP(i,m){
	    char d; int l;
	    cin>>d>>l;
	    REP(j,l){
		if(d=='N') y++;
		else if(d=='E') x++;
		else if(d=='S') y--;
		else x--;
		cnt+=f[x][y];
		f[x][y]=0;
	    }
	}
	if(cnt==n) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
    }

}