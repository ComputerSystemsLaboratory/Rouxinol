#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;
vector <int> memo;

int f(int n){
	memo[0]=1;
	memo[1]=2;
	memo[2]=4;
	
	for(int i = 3;i < 30 ; i++){
		memo[i] = memo[i-1]+memo[i-2]+memo[i-3];
	}
	if(n < 0){
		return 0;
	}
	if(n == 0){
		return 1;
	}
	return memo[n]/10/365+1;
}
int main(){
	int n;
	memo.resize(31,-1);
	while(cin >> n,n){
		n -= 1;
		int num = f(n);
		cout << num << endl;
	}
	return 0;
}