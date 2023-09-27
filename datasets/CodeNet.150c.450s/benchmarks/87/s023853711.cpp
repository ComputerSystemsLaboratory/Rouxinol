#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<iomanip>
#define pb push_back
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) loop(i,0,n)
using namespace std;
typedef long long ll;
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<pii> vp;
typedef vector<vi> vvi;
typedef vector<string> vs;
Def inf = sizeof(Def) == sizeof(ll) ? 2e18:1e9+10;
int main(){
	int n;
	while(cin>>n,n){
		vs in(5,"");
		rep(i,n)rep(j,5){
			string s;cin>>s;
			in[j]=s+in[j];
		}
		int out=0;
		while(1){
			int sum=0;
			rep(i,n){
				int l=2,r=2;
				while(l>=0&&i<in[l].size()&&in[2][i]==in[l][i])l--;
				while(r<5&&i<in[r].size()&&in[2][i]==in[r][i])r++;
				l++;r--;
				if(r-l+1>=3){
					sum+=(in[2][i]-'0')*(r-l+1);
					loop(j,l,r+1)in[j][i]='!';
				}
//			rep(q,5)cout<<in[q]<<endl;
//			cout<<endl;
			}
			if(sum==0)break;
			rep(i,5)rep(j,in[i].size())if(in[i][j]=='!'){
				in[i].erase(in[i].begin()+j);
				j--;
			}
			out+=sum;
		}
		cout<<out<<endl;
	}
}
