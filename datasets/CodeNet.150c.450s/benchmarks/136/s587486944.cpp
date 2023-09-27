#include<iostream>
using namespace std;

void change(long long *a,long long *b);
long long gcd(long long x,long long y);
long long lcm(long long x,long long y);


int main(void){
	long long a, b, gcd1, lcm1;
	while(cin >> a >> b){
		gcd1 = gcd(a,b);
		lcm1 = lcm(a,b);
		
		cout << gcd1 << ' ' << lcm1 << endl;
	}
	return 0;
}

void change(long long *a,long long *b){
	long long temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

long long gcd(long long x,long long y){
	if(x < y)
	change(&x, &y);
	
	while(y){
		x %= y;
		change(&x, &y);
	}
	return x;
}

long long lcm(long long x,long long y){
	long long ans = x*y / gcd(x, y);
	return ans;
}