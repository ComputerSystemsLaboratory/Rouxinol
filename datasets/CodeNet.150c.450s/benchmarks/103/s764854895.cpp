#include<iostream>
#include<cstdio>
using namespace std;
int solve(int num,int sum,int x){
	if(num == 0 && sum == 0) return 1;
	if(x == 10) return 0;
	return solve(num-1,sum-x,x+1) + solve(num,sum,x+1);
}
int main(){
	while(1){
		int n,s;
		scanf("%d%d",&n,&s);
		if(n == 0 && s == 0) break;
		cout << solve(n,s,0) << endl;
	}
	return 0;
}