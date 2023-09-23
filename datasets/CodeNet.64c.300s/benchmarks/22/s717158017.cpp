#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

bool ans[1000];

bool judge(int a,int b,int c) {
	if (pow(c,2)==(pow(a,2)+pow(b,2))) {
		return true;
	}
	return false;
}

int main() {
	int N,aside[3];
	scanf("%d",&N);
	for(int i=0;i<N;++i) {
		scanf("%d %d %d",&aside[0],&aside[1],&aside[2]);
		sort(aside,aside+3);
		if(judge(aside[0],aside[1],aside[2])) { ans[i]=true; }
		else { ans[i]=false; }
	}
	for(int i=0;i<N;++i) { 
		if(ans[i]) { puts("YES"); }
		else { puts("NO"); }
	}
	return 0;
}