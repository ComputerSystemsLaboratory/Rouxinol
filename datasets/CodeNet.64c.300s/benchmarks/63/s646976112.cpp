#pragma  warning (disable:4996)
#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int gcd(int d, int x){
	if (x == 0) return d;
	else return gcd(x, d%x);
}
long long lcm(int a, int b){
	int g = gcd(a, b);
	return a / g*b;
}
int main(){
	int n, m;
	while (cin >> n >> m){
		int s = n + m;
		n = max(n, m);
		m = s - n;
		cout << gcd(n, m) << " " << lcm(n, m) << endl;
	}return 0;
}