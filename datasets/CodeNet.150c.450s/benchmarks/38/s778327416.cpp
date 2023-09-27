#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int N,i;
	int count=0;
	int a[3];
	scanf("%d ",&N);
	while(count!=N){
	for(i=0;i<3;i++){
		scanf("%d ",&a[i]);
	}
	sort(a,a+3);
	if(a[2]*a[2]==a[0]*a[0]+a[1]*a[1]){
		printf("YES\n");
		count++;
	}
	else{
		printf("NO\n");
		count++;
	}
	}
	return 0;
	}