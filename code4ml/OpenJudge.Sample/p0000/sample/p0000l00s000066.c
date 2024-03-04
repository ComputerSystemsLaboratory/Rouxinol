#include <stdio.h>

int main(){
	int a[10] = {0}, i=0, j=0, k=0, l=0, b, c;
	
	for(c=0;c<10;c++){
		scanf("%d", &a[c]);
	}
	
	for(b=0;b<9;b++){
		for(j=9;j>=0;j--){
			if(a[j]<a[j-1]){
				k = a[j];
				a[j] = a[j-1];
				a[j-1] = k;
			}
		}
	}
	j = a[9];
	k = a[8];
	l = a[7];
	
	printf("%d\n%d\n%d\n", j, k, l);
	return 0;
}