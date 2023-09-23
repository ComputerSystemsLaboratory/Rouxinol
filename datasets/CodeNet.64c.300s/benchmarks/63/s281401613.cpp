#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


int gcd(int a,int b){
	if(a<b)swap(a,b);
	while(b!=0){
		int c = a%b;
		a=b;
		b=c;
	}
	return a;
}

int lcm(int a,int b){
	int d = gcd(a,b);
	return (a/d * b/d)*d;
}

int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		
		printf("%d %d\n",gcd(a,b),lcm(a,b));
		
	}
}