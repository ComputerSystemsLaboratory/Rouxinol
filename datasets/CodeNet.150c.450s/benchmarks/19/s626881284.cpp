#include <bits/stdc++.h>
#define IN(a) scanf("%d",&a);
#define OUT(a) printf(a);
#define REP(i,n) for (int i=0;i<(n);i++)
#define BR break;

using namespace std;

int main(){
	int inputcase[10000][2],counter=0;

	REP(i,10000){
		IN(inputcase[i][0])
		IN(inputcase[i][1])
		if (inputcase[i][0]==0 && inputcase[i][1]==0)
			BR
		counter++;
	}

	REP(j,counter){
		if (inputcase[j][0]>inputcase[j][1])
			swap(inputcase[j][0],inputcase[j][1]);
		printf("%d %d\n",inputcase[j][0],inputcase[j][1] );
	}

	return 0;
 }