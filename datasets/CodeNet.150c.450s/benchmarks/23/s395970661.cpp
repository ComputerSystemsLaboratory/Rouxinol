#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
const int inf=1000000001;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009
#define pi 3.14159265358979323846

int main(){
	int n,i;
	cin>>n;
	vl dp(n+1);
	dp[0]=dp[1]=1;
	loop(i,2,n+1){
		dp[i]=dp[i-1]+dp[i-2];
	}
	cout<<dp[n]<<endl;
}