#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;

int main(void){
	int n,a[101],m=0;
	rep(i,1,101){
		a[i]=0;
	}
	while( cin >> n ){
		a[n]++;
	}
	rep(i,1,101){
		if(m < a[i]){
			m=a[i];
		}
	}
	rep(i,1,101){
		if(m == a[i]){
			cout << i << "\n";
		}
	}
	return 0;
}