#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<sstream>
#include<iomanip>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef pair<int,pii> pip;
typedef vector<pip>vip;
const double PI=acos(-1);
const double EPS=1e-9;
const int inf=1e8;
int main(){
	int n;
	while(cin>>n,n){
		vvi in(5,vi(n));
		rep(i,n)rep(j,5)cin>>in[j][n-1-i];
		int out=0;
		while(1){
			bool h=false;
			rep(i,in[2].size()){
				int l=2,r=2;
				while(l>=0&&in[l].size()>=i&&in[l][i]==in[2][i])l--;
				while(r< 5&&in[r].size()>=i&&in[r][i]==in[2][i])r++;
				if(r-l-1<3)continue;
				out+=(r-l-1)*in[2][i];
				h=true;
				loop(j,l+1,r)in[j][i]=inf;
			}
			rep(i,5)rep(j,in[i].size())if(in[i][j]==inf){
				in[i].erase(in[i].begin()+j);
				j--;
			}
//		rep(i,5){rep(j,in[i].size())cout<<" "<<in[i][j];cout<<endl;}
			if(!h)break;
		}
		cout<<out<<endl;
	}
}