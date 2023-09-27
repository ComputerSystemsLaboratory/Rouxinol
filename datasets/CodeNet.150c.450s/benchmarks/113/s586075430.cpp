#include <bits/stdc++.h>
#define IN(a) scanf("%d",&a);
#define OUT(a) printf(a);
#define REP(i,n) for (i=0;i<(n);i++)
#define BR break;

using namespace std;

int main(){
	int inputcase[10000],i,j;
	for (i=0;i<10000;i++){
		IN(inputcase[i])
		if (inputcase[i]==0)
			BR
	}
	for (j=0;j<i;j++){
		printf("Case %d: %d\n",j+1,inputcase[j]);
	}
	return 0;
 }