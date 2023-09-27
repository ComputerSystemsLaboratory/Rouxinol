//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <stack>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <utility>
using namespace std;
#define INF 100000005
#define MAX 200005

int a[100];

int solve(int p, int c, int n){
	int x[100], y[100], xx = 0, yy = 0;
	for(int i = n;1;i--){
		if(n-p < i)x[xx++] = a[i];
		else if(n-p-c < i)y[yy++] = a[i];
		else break;
	}
	for(int i = 0;i < n;i++){
		if(n-p-c >= i);
		else if(n-c > i)a[i] = x[--xx];
		else a[i] = y[--yy];
	}
	return 0;
}

int main(){
	int n, r, p, c;
	while(cin >> n >> r, n){
		for(int i = 0;i < n;i++)a[i] = i+1;
		for(int i = 0;i < r;i++){
			cin >> p >> c;
			solve(p, c, n);
		}
		cout << a[n-1] << endl;
	}
	return 0;
}