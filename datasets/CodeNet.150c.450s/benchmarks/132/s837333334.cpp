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

int a[55];
int main(){
	int n, p, s, num, ans, flag;
	while(cin >> n >> p, n){
		fill(a, a+55, 0);
		s = p;
		flag = 1;
		while(flag){
			num = 0;
			for(int i = 0;flag && i < n;i++){
				if(!s && a[i]){
					s = a[i];a[i] = 0;
				}else if(s){
					a[i]++;s--;
					if(a[i] == p){
						ans = i;
						flag = 0;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}