#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	long long f[50];
	f[0]=1;
	f[1]=1;
	
	for(int i=2; i<45; ++i) f[i]=f[i-1]+f[i-2];
	
	int n;
	scanf(" %d", &n);
	cout << f[n] << endl;
}