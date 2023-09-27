#include <stdio.h>
int main(){
long long int n,o;
scanf("%lld %lld",&n,&o);
long long int a[n];
for (long long int i=0;i<n;i++){
	scanf("%lld",&a[i]);
}
for(long long int i=o;i<n;i++){
	if(a[i-o]<a[i]){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
}
return 0;
}
