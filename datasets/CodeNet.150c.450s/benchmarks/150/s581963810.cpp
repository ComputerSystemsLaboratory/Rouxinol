#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <math.h>
#define rep(i,o,u) for(int i = o;i <= u; i++)
using namespace std;
short a[2000000];
short b[2000000];
int main(){
	int n;
	int c[10001];
	rep(i,0,10000) c[i] = 0;
	cin >> n;
	rep(i,0,n-1){ cin >> a[i];c[a[i]]++; }
	rep(i,1,10000){ c[i] += c[i-1]; }
	rep(i,0,n-1){
		b[c[a[i]]] = a[i];
		c[a[i]]--;
	}
	rep(i,1,n){ cout << b[i] ;if(i != n) cout << " ";}
	cout << endl;
	return 0;
}