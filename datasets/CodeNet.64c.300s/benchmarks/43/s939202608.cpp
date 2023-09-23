#include "bits/stdc++.h"

using namespace std;

const char en = '\n';
using  ll =          long long;
using ull = unsigned long long;

#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,s,g) for(int i=s;i<g;i++)

int main(){
	ios::sync_with_stdio(false);cin.tie();

	int a=0,b=0,buf;

	REP(i,4) cin>>buf,a+=buf;
	REP(i,4) cin>>buf,b+=buf;

	cout<<max(a,b)<<en;
	return 0;
}