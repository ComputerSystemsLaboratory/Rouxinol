#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define rrep(i,n) for(int i=n-1;i>=0;--i)
#define yesno(flg) if(flg){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define MAX_N 1002
#define i197 1000000007

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P1;
typedef pair<int,int> Pi;
typedef pair<double,Pi> Pdi;
typedef pair<ll,int>Pli;
typedef pair<P1,ll> P2;
typedef pair<string,string> Ps;
const ll INF=1000000000000000001;
struct edge{int to,cost;};
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
struct Road{double cost;int a,b;};
struct pos{
	// 1 変数を入れる;
	int x,y,sx,sy,cost;
};

int main() {

	while(1){
		int a,b,c,d;
		int e,f,g,h;
		int t[10]={};
		int hi=0,bu=0;
		cin>>a>>b>>c>>d;
		cin>>e>>f>>g>>h;
		if(cin.eof())return 0;
		t[a]++;
		t[b]++;
		t[c]++;
		t[d]++;
		t[e]++;
		t[f]++;
		t[g]++;
		t[h]++;
		for(int i=1; i<10; i++){
			if(t[i]==2)bu++;
		}
		if(a==e)hi++;
		if(b==f)hi++;
		if(c==g)hi++;
		if(d==h)hi++;
		cout<<hi<<" "<<bu-hi<<endl;
	}

	return 0;
}

