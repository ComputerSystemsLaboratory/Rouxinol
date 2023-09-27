//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0007&lang=jp
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <array>
#include <numeric>
#include <functional>

#define rep(i,n) for(int i=0;i<n;i++)
#define scanInt(i) scanf("%d", &i)

using namespace std;


int main(){

	int init = 100000;
	double r = 1.05;

	int n;
	scanInt(n);
	rep(i,n){
		init *= r;
		if(init % 1000 != 0){
			int a = init / 1000;
			a+=1;
			init = a*1000;
		}
	}
	printf("%d\n", init);

	return 0;
}