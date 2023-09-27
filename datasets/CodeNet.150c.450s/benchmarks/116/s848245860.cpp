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
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	int n,m;
	while(cin>>n>>m,n||m){
		vector<int>in(n+1);
		rep(i,n)cin>>in[1+i];
		loop(i,1,1+n)in[i]+=in[i-1];
		int ma=-1e9;
		rep(i,n-m+1)ma=max(ma,in[i+m]-in[i]);
		cout<<ma<<endl;
	}
}