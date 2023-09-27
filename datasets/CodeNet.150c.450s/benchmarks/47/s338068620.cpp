#include <bits/stdc++.h>
#define IN(a) scanf("%d",&a);
#define OUT(a) printf(a);
#define REP(i,n) for (int i=0;i<(n);i++)

using namespace std;

int main(){
	int a[5];
	REP(i,5){
		IN(a[i])
	}

	if (a[2]-a[4] >= 0 && a[3]-a[4] >= 0 && a[2]+a[4] <= a[0] && a[3]+a[4] <= a[1] ){
		OUT("Yes\n")
	}
	else{
		OUT("No\n")
	}

	return 0;
 }