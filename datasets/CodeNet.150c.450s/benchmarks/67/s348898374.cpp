#include<iostream>
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
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
typedef long long ll;
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<string> vs;
Def inf = sizeof(Def) == sizeof(ll) ? 2e18:1e9+10;
int main(){
	int n;
	while(cin>>n,n){
		int co=0;
		loop(i,0,1010)loop(j,i+2,1010)if(j*(j+1)/2-i*(i+1)/2==n)co++;
		cout<<co<<endl;
	}
}
