#include<iostream>
#include<iomanip>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<cstring>
#include<sstream>
using namespace std;
 
#define P(p) cout<<(p)<<endl
#define rep(i,m,n) for(int i = (m); i < (int)(n); i++)
#define rrep(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define vsort(v) sort(v.begin(), v.end());
#define rvsort(v) sort(v.begin(), v.end(),greater<int>());
#define YES cout<<"YES"<< endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl  
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define ret return
#define lb(v,n) lower_bound(v.begin(),v.end(),n)
#define ub(v,n) upper_bound(v.begin(),v.end(),n)
#define mae(v) max_element(v.begin(),v.end())
#define mie(v) min_element(v.begin(),v.end())
#define INF 0x7FFFFFFF
#define mod 1000000007
typedef long long ll;
////////////////////////////////////////////////////////////

int main(){
	unsigned long long dp[100];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	rep(i,4,40){
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];	
	}
	

	int n;
	while( cin >> n ){
		if( !n )
			ret 0;

		if( dp[n] % 3650 )
			cout << dp[n] / 3650 + 1 << endl;
		else
			cout << dp[n] / 3650 << endl;
	}

	ret 0;
}
