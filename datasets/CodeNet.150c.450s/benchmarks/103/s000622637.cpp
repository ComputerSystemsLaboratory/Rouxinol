#include<iostream>
#include<cstdio>
using namespace std;
#define int long long
int func(int n, int a, int b){
	if(n==0 && a==0) return 1;
	else if (n==0 || a<0) return 0;
	int ans=0;
	for(int i=b;i<10;i++) ans += func(n-1, a-i, i+1);
	return ans;
}
signed main(){
	int a,b;
	while( scanf("%lld %lld", &a, &b) != EOF ){
		if(a==0&&b==0) break;
		cout << func(a,b,0) <<endl;
	}
	return 0;
}