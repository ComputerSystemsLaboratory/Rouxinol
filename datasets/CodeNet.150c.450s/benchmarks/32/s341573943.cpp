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
#include<cstdio>
#include<sstream>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef pair<int,pii> pip;
typedef vector<pip>vip;
const double PI=acos(-1);
const double EPS=1e-8;
const int inf=1e8;
int main(){
	int n,m,k;
	while(cin>>n>>m>>k,n){
		vi a(n);
		rep(i,n)cin>>a[i];
		sort(all(a),[](int a,int b){return a>b;});
		int out=0;
		int outa=0;
		loop(i,m,k+1){
			int t=a[i-1]-a[i];
			if(out<=t){
				out=t;
				outa=i;
			}
		}
		cout<<outa<<endl;
	}
}