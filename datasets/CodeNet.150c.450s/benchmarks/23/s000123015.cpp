#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <list>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <climits>
using namespace std;

long *memo;
long fib(long n){
	if(n < 2) return 1;
	return memo[n] != -1 ? memo[n] : (memo[n] = fib(n-1) + fib(n-2));
}

int main() {
	memo = new long[64];
	for(int i = 0; i < 64; i++){
		memo[i] = -1;
	}
	
	long n;
	cin >> n;
	cout << fib(n) << endl;
	return 0;
}