#include<stdio.h>
int main(){
	int cs, ang, max=-1000000, min=1000001;
	long long int sum=0;
	scanf("%d", &cs);
	for(int i=0; i<cs; i++){
		scanf("%d",  &ang);
		if(max<ang)max=ang;
		if(min>ang)min=ang;
		sum = sum + ang;
	}
	printf("%d %d %lld\n", min, max, sum);
}
