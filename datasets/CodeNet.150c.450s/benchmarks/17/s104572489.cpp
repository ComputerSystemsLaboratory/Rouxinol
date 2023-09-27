#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

int main() {
	int a[5];
	rep(i, 5)scanf("%d", &a[i]);
	sort(a, a + 5, greater<>());
	rep(i, 5)cout << a[i] << (i == 4 ? '\n' : ' ');
	return 0;
}