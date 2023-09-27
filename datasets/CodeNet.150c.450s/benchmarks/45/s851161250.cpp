#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <list>

long long int INF = 1e18;
long long int MOD = 1000000007;
using namespace std;

typedef pair<long long int, long long int> P;

int main(){
	
	long long int m, n;
	cin >> m >> n;
	
	long long int pm = m;
	long long int ans = 1;
	for(int i = 0; i < 100; i++){
		if(n % 2 == 1){
			ans *= pm;
			ans %= MOD;
		}
		n /= 2;
		pm *= pm;
		pm %= MOD;
	}
	
	cout << ans << endl;
	
	return 0;
}
