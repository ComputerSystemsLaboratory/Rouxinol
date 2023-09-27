#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

int main(){
	int n;
	cin>>n;
	ll fact=1;
	FOR(i,2,n+1){
		fact*=i;
	}
	cout<<fact<<endl;
	return 0;
}