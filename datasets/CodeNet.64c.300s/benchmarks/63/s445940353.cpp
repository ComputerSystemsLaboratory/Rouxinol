#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cctype>

using namespace std;

long long int gcd(long long int a, long long int b){
	if (a < b)
		swap(a, b);
	if (b == 0)
		return a;
	else 
	return gcd(b, a%b);
}

long long int lcm(long long int c, long long int d){
	return c*d / gcd(c, d);
}

int main(){
	long long int M, N;
	while (cin>>M>>N){
		cout << gcd(M, N) << " " << lcm(M, N) << "\n";
	}
	return 0;
}