#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=a;i<b;++i)

int main() {
	int A = 0, B = 0, a;
	for_(i,0,4) scanf("%d", &a), A += a;
	for_(i,0,4) scanf("%d", &a), B += a;
	cout << max(A, B) << endl;
	return 0;
}