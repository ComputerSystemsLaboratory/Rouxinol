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
typedef vector<vi> vvi;
int main(){
	int n,m;
	while(cin>>n>>m,n+m){
		int a[11]={0};
		rep(i,n){
			int b,c;cin>>b>>c;
			a[c]+=b;
		}
		int out=0;
		for(int i=10;i>=0;i--){
			if(a[i])out+=i*(max(0,a[i]-m));
			m=max(0,m-a[i]);
		}
		cout<<out<<endl;
	}
}