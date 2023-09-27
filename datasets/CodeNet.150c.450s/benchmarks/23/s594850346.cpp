#include <iostream>
#include <string>
#include <math.h>
#define LEN 1000000
using namespace std;

int f[50];
int fib(int);

int main(){
	f[0]=f[1]=1;
	int n;
	for(int i=2;i<50;i++){
		f[i]=-1;
	}
	cin >> n;
	cout << fib(n) <<endl;
}

int fib(int a){
	if(f[a]!=-1) return f[a];
	return f[a]=fib(a-1)+fib(a-2);
}