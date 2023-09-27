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
const double PI=acos(-1);
const double EPS=1e-8;
const long long inf=1e16;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
int main(){
	int dp[31]={1,1,2};
	loop(i,3,31)dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	int n;
	while(cin>>n,n){
		int t=dp[n];
		t=(t-1)/10+1;
		cout<<((t-1)/365+1)<<endl;
	}
//	rep(i,31)cout<<dp[i]<<endl;
}