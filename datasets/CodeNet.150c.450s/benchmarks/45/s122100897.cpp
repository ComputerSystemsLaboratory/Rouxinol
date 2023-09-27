#include <cmath>
#include <cstdlib>
#include <iostream>
#include <bitset>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <chrono>
#include <random>
#include <tuple>
#include <utility>
#include <fstream>
#include <complex>
#define _USE_CMATH_DEFINES

const long INF = (1l << 30);
const long LINF = (1l << 60); //1.15*10^18

//累乗 べき乗
long power(long a, long b){
	if(b == 0){
		return 1;
	}else if(b % 2 == 1){
		return a * power(a, b-1);
	}else{
		long r = power(a, b/2);
		return r*r;
	}
}
long power(long a, long b, long MOD){
	if(b == 0){
		return 1l;
	}else if(b % 2 == 1){
		return a * power(a, b-1, MOD) % MOD;
	}else{
		long r = power(a, b/2, MOD);
		return r * r % MOD;
	}
}

long m, n;
const long MOD = 1000000007;

int main(){
    scanf("%ld%ld", &m, &n);
    printf("%ld\n", power(m, n, MOD));
}

