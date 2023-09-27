#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <queue>
#include <algorithm>
#include <cctype>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const double pi=acos(-1);

ll n,ans;
vector<ll> dp,num;

int main(){
	while(1){
		cin>>n;
		if(!n) break;
		ans=-inf;
		dp=vector<ll>(n);
		num=vector<ll>(n);
		for(int i=0;i<n;i++) cin>>num[i];
		dp[0]=num[0];
		for(int i=0;i<n-1;i++) dp[i+1]=max(num[i+1],num[i+1]+dp[i]);
		for(int i=0;i<n;i++) ans=max(ans,dp[i]);
		cout<<ans<<endl;
	}
}