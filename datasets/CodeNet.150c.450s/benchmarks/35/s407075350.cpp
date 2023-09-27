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
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define rp(a) while(a--)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	int n;
	while(cin>>n,n){
		vector<int>in(n+1);
		rep(i,n)cin>>in[i+1];
		n++;
		loop(i,1,n)in[i]+=in[i-1];
		int ma=-1e9;
		rep(i,n)loop(j,i+1,n)ma=max(ma,in[j]-in[i]);
		cout<<ma<<endl;
	}
}