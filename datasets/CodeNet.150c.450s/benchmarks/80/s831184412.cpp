#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int a, s, t;

int main() {
	rep(i,4) scanf("%d",&a), s += a;
	rep(i,4) scanf("%d",&a), t += a;
	printf("%d\n",max(s,t));
}
