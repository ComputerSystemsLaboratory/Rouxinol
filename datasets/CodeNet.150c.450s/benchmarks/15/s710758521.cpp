#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
long S[10000];
long T[500];

int main(){
	int n; scanf("%d",&n);
	for (int i = 0; i < n; ++i) scanf("%d", &S[i]);
	int q; scanf("%d",&q);
	for (int i = 0; i < q; ++i) scanf("%d",&T[i]);
	sort(S, S + n);
	sort(T, T + q);
	int cnt = 0;
	int k = 0;
	for (int i = 0; i < n; ++i){
		for (int j=k; j < q; ++j){
			if (S[i] == T[j]) { ++cnt, k=j+1; break; }
		}
	}
	cout << cnt << '\n';
}