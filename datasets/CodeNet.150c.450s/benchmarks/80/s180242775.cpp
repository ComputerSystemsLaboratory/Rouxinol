#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=a;i<b;++i)

int main() {
	int A = 0, B = 0;
	for_(i,0,4) {
		int a; scanf("%d", &a); A += a;
	}
	for_(i,0,4) {
		int b; scanf("%d", &b); B += b;
	}
	cout << max(A, B) << endl;
	return 0;
}