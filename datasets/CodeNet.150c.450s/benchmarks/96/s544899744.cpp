#include <bits/stdc++.h>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef vector<pll> vpll;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<29;
const ll INF=1ll<<60;
const double pi=acos(-1);
const double eps=1e-11;
const ll mod=1e9+7;
const int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};

vs a(9);

int main(){
	a[0]=".,!? ";
	a[1]="abc";
	a[2]="def";
	a[3]="ghi";
	a[4]="jkl";
	a[5]="mno";
	a[6]="pqrs";
	a[7]="tuv";
	a[8]="wxyz";
	while(1){
		int n;
		cin>>n;
		if(n==0) break;
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			int id=-1,cnt=0;
			for(auto c:s){
				if(c=='0'){
					if(id>=0){
						cout<<a[id][(cnt-1)%a[id].size()];
						id=-1;
						cnt=0;
					}
				}
				else{
					id=c-'1';
					cnt++;
				}
			}
			cout<<endl;
		}
		break;
	}
}
