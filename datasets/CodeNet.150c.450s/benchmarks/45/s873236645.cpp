#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <cfloat>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <iostream>
typedef long long int ll;
typedef unsigned long long int ull;
#define BIG_NUM 2000000000
#define MOD 1000000007
#define EPS 0.000000001
using namespace std;

ll pow(ll num,ll count){

	if(count == 0)return 1;
	if(count == 1)return num;

	ll ret;

	if(count%2 == 0){

		ret = pow(num,count/2);
		ret = ret*ret%MOD;

	}else{

		ret = pow(num,(count-1)/2);
		ret = ret*ret%MOD;
		ret *= num;
		ret %= MOD;
	}

	return ret%MOD;
}


int main(){

	ll M,N;
	scanf("%lld %lld",&M,&N);

	printf("%lld\n",pow(M,N)%MOD);

	return 0;
}