#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
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
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
typedef long long ll;
typedef ll Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vii;
typedef vector<pii> vp;
typedef vector<string> vs;
Def inf = sizeof(Def) == sizeof(ll) ? 2e18 : 1e9+10;
signed main(){
	int n;
	cin>>n;
	while(n--){
		int y,m,d;
		cin>>y>>m>>d;
		int co=0;
		while(!(y==1000&&m==1&&d==1)){
			d++;
			if(y%3==0||m%2){
				if(d==21){
					d=1;
					m++;
				}
			}else{
				if(d==20){
					d=1;
					m++;
				}
			}
			if(m==11){
				m=1;
				y++;
			}
			co++;
		}
		cout<<co<<endl;
	}
}






