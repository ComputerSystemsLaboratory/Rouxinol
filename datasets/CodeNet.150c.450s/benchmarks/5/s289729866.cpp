#include <cstdio>

int main(){
	int n;
	int a[101];
	scanf("%d",&n);
	for(int i=0;i<n;i++){scanf("%d",&a[i]);}
	while(n>1){printf("%d ",a[n-1]);n--;}
	printf("%d\n",a[0]);
}