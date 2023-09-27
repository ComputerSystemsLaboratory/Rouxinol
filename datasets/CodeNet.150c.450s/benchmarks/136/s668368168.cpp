#include<iostream>
#include<stdio.h>

using namespace std;

long long int gcd(long long int a,long long int b){
	if(b == 0) return a;
	return gcd(b,a%b);
}

long long int lcm(long long int a,long long int b){
	return a*b/gcd(a,b);
}

int main(){
	long long int a,b;
	
	while(scanf("%lld %lld",&a,&b) != EOF){
		cout << gcd(a,b) << " " << lcm(a,b) <<  endl;
	}
	return 0;
}