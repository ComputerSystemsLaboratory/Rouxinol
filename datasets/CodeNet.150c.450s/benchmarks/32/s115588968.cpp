#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<iomanip>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vii;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef pair<Def,pii> pip;
typedef vector<pip> vip;
Def inf = sizeof(Def) == sizeof(long long) ? 2e18 :1e9;
int main(){
	int n,a,b;
	while(cin>>n>>a>>b,n){
		vi in(n);
		rep(i,n)cin>>in[i];
		int ma=-1,mai;
		loop(i,a-1,b){
			int s=in[i]-in[i+1];
			if(s>=ma){
				ma=s;
				mai=i;
			}
		}
		cout<<mai+1<<endl;
	}
}
