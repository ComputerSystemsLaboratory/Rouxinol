#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
int n;
int A[20];
bool memo[2001];
bool Search(int ite, int SUM){
	if (SUM == 0) return true;
	if (ite == n || SUM<0) return false;
	return (Search(ite+1,SUM-A[ite]) || Search(ite+1,SUM));
}
int main(){
	scanf("%d",&n);
	for (int i = 0; i < n; ++i) scanf("%d", &A[i]);
	int q; scanf("%d", &q);
	for (int i = 0; i < q; ++i){
		int m; scanf("%d", &m);
		if (memo[m] || Search(0, m)){
			cout << "yes\n";
			memo[m] = true;
		}
		else cout << "no\n";
	}
}