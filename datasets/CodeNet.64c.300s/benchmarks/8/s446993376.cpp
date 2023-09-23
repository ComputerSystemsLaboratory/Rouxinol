#include <iostream>
#include <algorithm>
#include <cstdio>
#define REP(i,m) for(long long i=0; i<m; i++)
#define FOR(i,n,m) for(long long i=n; i<m; i++)
using namespace std;

bool check(int n){
	if(n%3 == 0) return true;
	while(n != 0){
		if(n % 10 == 3) return true;
		n /= 10;
	}
	return false;
}
int main() {
	int n;
	cin >> n;
	FOR(i, 1, n+1){
		if(check(i)){
			cout << " " << i;
		}
	}
	cout << endl;
	return 0;
}
