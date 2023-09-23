#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int a;
bool b[31];

int main() {
	b[0] = true;
	rep(i,28) scanf("%d",&a), b[a] = true;
	rep(i,31) if (!b[i]) printf("%d\n",i);
}
