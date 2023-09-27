//Square Root

//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
//#include <cstdio>
//#include <iomanip>//"cout<<fixed<<setprecision(n)<<sth<<endl;"
//#include <string>//"reverse(s's it,s's it)"
//#include <functional>//"greater<T>" "sort(a,a+n,greater<int>());""
//#include <cmath>//"abs" "sqrt"
//#include <numeric>//"accumulate(inputit,inputit,init,(optional) object)"
//#include <algorithm>//"lower_bound(it,it,v)" "next_permutation(a,a+n)"
//"reverse(v's it,v's it)"(v: vector)
using namespace std;
#define pb push_back//also for STRING
#define fi first
#define sc second
#define mp make_pair
#define is insert
#define ps push//TMP//stack,(priority) queue,
#define fr front//TMP//queue//for priority, use top().
typedef long long ll;//not necessarily
typedef pair<int,int> pii;
//Add other types in the same way.

#define MAX_N 1500
#define MAX_M 1500

void solve(int n,int m){
	int h[MAX_N],w[MAX_M];
	for(int i=0;i<n;++i) cin>>h[i];
	for(int i=0;i<m;++i) cin>>w[i];
	map<int,int> mp;
	for(int i=0;i<n;++i){
		int sm=0;
		for(int j=i;j<n;++j){
			sm+=h[j];
			++mp[sm];
		}
	}
	int ans=0;
	for(int i=0;i<m;++i){
		int sm=0;
		for(int j=i;j<m;++j){
			sm+=w[j];
			ans+=mp[sm];
		}
	}
	cout<<ans<<endl;
	return;
}

int main(){
	while(true){
		int n,m;
		cin>>n>>m;
		if(n!=0) solve(n,m);
		else break;
	}
}