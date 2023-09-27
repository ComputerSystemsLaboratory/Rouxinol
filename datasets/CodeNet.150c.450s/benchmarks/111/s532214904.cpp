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
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e9;
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
int main(){
	int n;
	cin>>n;
	vi dp(21);
	int a;
	cin>>a;
	dp[a]++;
	rep(i,n-2){
		cin>>a;
		vi t(21);
		rep(j,21)if(dp[j]){
			if(j+a<21)t[j+a]+=dp[j];
			if(0<=j-a)t[j-a]+=dp[j];
		}
		dp=t;
	}
	cin>>a;
	cout<<dp[a]<<endl;
}