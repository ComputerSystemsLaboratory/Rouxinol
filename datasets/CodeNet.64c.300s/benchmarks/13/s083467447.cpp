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
using namespace std;

typedef pair<long long int, long long int> P;

int main(){
	
	int n;
	cin >> n;
	
	long long int fib[50] = {};
	
	fib[0] = 1;
	fib[1] = 1;
	for(int i = 2; i < 50; i++){
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	
	cout << fib[n] << endl;
	
	return 0;
}
