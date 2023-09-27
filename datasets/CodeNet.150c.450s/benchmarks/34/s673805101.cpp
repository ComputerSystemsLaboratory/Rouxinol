#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<time.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e8;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
vector<vector<char> >tmp;
vector<vector<int> >scr;
int main(){
	ll dp[30]={1,2,4};
	loop(i,3,30)dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	int n;
	while(cin>>n,n){
		ll d=dp[n-1];
		d=(d+9)/10;
		cout<<(d+364)/365<<endl;
	}
}