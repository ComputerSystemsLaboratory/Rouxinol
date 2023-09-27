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
	int a,b,c;
	while(cin>>a>>b>>c,a){
		int out=0;
		loop(i,1,1100)loop(j,1,1100){
			int x=i*(100+a)/100;
			int y=j*(100+a)/100;
			if(x+y==c){
				out=max(out,i*(100+b)/100+j*(100+b)/100);
			}
		}
		cout<<out<<endl;
	}
}
