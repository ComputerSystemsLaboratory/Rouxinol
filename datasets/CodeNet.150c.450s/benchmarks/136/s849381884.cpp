#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a,int b){
	if(a==0 || b==0) return 0;
	while(a != b){
		if(a>b) a = a - b;
		else b = b - a;
	}
	return a;
}
int lcm(int a,int b){
	if(a==0 || b==0) return 0;
	int tmp = a/gcd(a,b);
	return tmp*b;
}

int main(){
	int a,b;
	while(cin >> a >> b){
		cout << gcd(a,b) << " " << lcm(a,b) << endl;
	}
	return 0;
}