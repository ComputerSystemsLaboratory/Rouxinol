#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
#include<set>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 1000000007
typedef long long ll;

ll power(ll m,ll n){
	if(n==0) return 1;
	if(n%2==0) return power((m*m)%MAX,n/2);
	else return (m*power((m*m)%MAX,(n-1)/2))%MAX;
}
	
int main(){
	ll m,n;
	cin >> m>>n;
	cout << power(m,n) << endl;
	return 0;
}

