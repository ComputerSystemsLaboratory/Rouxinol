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
	int n;
	while(cin>>n,n){
		map<char,vector<char> >in;
		rep(i,n){
			char a,b;
			cin>>a>>b;
			in[a].pb(b);
		}
		cin>>n;
		rep(i,n){
			char d;
			cin>>d;
			if(in[d].size())d=in[d][0];
			cout<<d;
		}
		cout<<endl;
	}
}