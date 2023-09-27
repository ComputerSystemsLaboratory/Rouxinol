#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <stack>
#include <queue>
#include <utility>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define rrep(i,n,l) for(int i=n-1;i>=l;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a);
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

string changes(int k){
	stringstream ss;
	string s;
	ss<<k;
	ss>>s;
	return s;
}

int changei(string s){
	stringstream ss;
	int k;
	ss<<s;
	ss>>k;
	return k;
}

int main(){
	int n,l;
	while(1){
		cin>>n>>l;
		if(n+l==0) break;
		int d[100]={0};
		bool f=false;
		d[0]=n;
		rep(i,1,21){
			string s=changes(n);
			while(s.size()<l){
				s+="0";
			}
			string t1=s;
			sort(all(t1));
			string t2=t1;
			reverse(all(t2));
			int MAX,MIN;
			MAX=changei(t2);
			MIN=changei(t1);
			n=MAX-MIN;
			d[i]=n;
			rep(j,0,i){
				if(d[i]==d[j]){
					cout<<j<<" "<<d[i]<<" "<<i-j<<endl;
					f=true; break;
				}
			}
			if(f) break;
		}
	}
}