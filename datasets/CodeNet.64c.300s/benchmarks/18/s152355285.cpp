#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <typeinfo>
#include <map>

using namespace std;
typedef long long LL;
#define REP(i,N) for(int i = 0; i < (int)N; i++)
LL dp[35];
int main(){
	int n;
	dp[0] = 1;
	for(int i=1;i<=30;i++){
		for(int j=1;j<=min(3,i);j++){
			dp[i] += dp[i-j];
		}
	}
	while(cin >> n){
		if(n==0)break;
		cout << ((dp[n]/3650)  + (dp[n]%3650 == 0 ?0:1)  )<< endl;
	}
	return 0;
}