#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int gcd(int a,int b){
	if(b == 0)
		return a;
	else return gcd(b,a%b);
}

int main(){
	int n,m;
	cin >>n >>m;
	if(n < m){
		int temp;
		temp = m;
		m = n;
		n = temp;
	}
	cout << gcd(n,m) << endl;
	return 0;
}