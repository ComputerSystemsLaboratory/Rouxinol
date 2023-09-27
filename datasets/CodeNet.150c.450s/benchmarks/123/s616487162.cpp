#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
 
bool isprime(int a){
	if(a==2) return true;
	if(a%2==0) return false;
	for(int i=3;i*i<=a;i+=2){
		if(a%i==0) return false;
	}
	return true;
}

int main () {
	int n,j,b,sum=0;
	cin >> n;
	for(j=0;j<n;j++){
		cin >> b;
		if(isprime(b)) sum+=1;
	}
	cout << sum << endl;
}