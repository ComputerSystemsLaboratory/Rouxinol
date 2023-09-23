#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <queue>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
#define MAX_N 2000000
const long m = 1000000000 + 7;

long myPow(long x,long n,long m){
	if(n == 0) return 1;
	if( n % 2 == 0){
		return myPow(x*x % m, n / 2,m);
	}else{
		return x*myPow(x,n-1,m) % m;
	}
}

int main()
{
	long x,n;
	cin>>x>>n;
	cout<<myPow(x,n,m)<<endl;
	return 0;
}


