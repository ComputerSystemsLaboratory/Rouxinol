//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0001&lang=jp
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <map>

using namespace std;


int main(){
	int n = 10;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	printf("%d\n", a[9]);
	printf("%d\n", a[8]);
	printf("%d\n", a[7]);


	return 0;

}