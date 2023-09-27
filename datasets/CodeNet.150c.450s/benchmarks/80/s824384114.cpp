#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main() {
	int S = 0; rep(i, 4) { int a; scanf("%d", &a); S += a; }
	int T = 0; rep(i, 4) { int a; scanf("%d", &a); T += a; }
	cout << max(S, T) << endl;
	return 0;
}