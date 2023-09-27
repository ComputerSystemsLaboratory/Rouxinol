#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int w, n, a, b, r[30];

int main() {
	scanf("%d %d",&w,&n);
	rep(i,w) r[i] = i+1;
	rep(i,n) {
		scanf("%d,%d",&a,&b);
		swap(r[a-1], r[b-1]);
	}
	rep(i,w) printf("%d\n",r[i]);
}
