#include <iostream>
#include <fstream>
#include <typeinfo>
#include <vector>
#include <stack>
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <iomanip>
#include <cctype>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<28;
const ll INF=1ll<<50;
const double pi=acos(-1);
const double eps=1e-10;
const ll mod=1e9+7;
const vi emp;
const int dx[4]={0,1,0,-1},dy[4]={1,0,-1,-0};
const int DX[8]={-1,-1,-1,0,0,1,1,1},DY[8]={1,0,-1,1,-1,1,0,-1};

int n;
vi a;

int main(){
	cin>>n;
	a=vi(n);
	for(int i=0;i<n;i++) cin>>a[i];
	vvl dp(n-1,vl(21,0));
	dp[0][a[0]]++;
	for(int i=1;i<n-1;i++) for(int j=0;j<21;j++){
		int p=j+a[i],q=j-a[i];
		if(p<21) dp[i][j]+=dp[i-1][p];
		if(q>=0) dp[i][j]+=dp[i-1][q];
	}
	cout<<dp[n-2][a[n-1]]<<endl;
}