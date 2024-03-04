#include<stdio.h>
int main(void){
	int a,i,z,iti,ni,san;
	iti=0;
	ni=0;
	san=0;
	for(z=1;z<=10;z++){
		scanf("%d",&a);
		if(iti<=a){
			san=ni;
			ni=iti;
			iti=a;
			goto a;
		}
		if(ni<=a){
			san=ni;
			ni=a;
			goto a;
		}
		if(san<=a){
			san=a;
			goto a;
		}
		a:;
	}
	printf("%d\n",iti);
	printf("%d\n",ni);
	printf("%d\n",san);
	return 0;
}
