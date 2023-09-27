#include <stdio.h>
#include <string.h>

#define MIN(a,b) ((b<a)?b:a)
#define MAX(a,b) ((b>a)?b:a)

int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
	int c=0;
	int i,j,k;
	int t=n;
	for(i=MAX(t-27,0);i<=MIN(t,9);i++){
		t-=i;
		for(j=MAX(t-18,0);j<=MIN(t,9);j++){
			t-=j;
			for(k=MAX(t-9,0); k<=MIN(t,9) ;k++){
				c++;
			}
			t+=j;
		}
		t+=i;
	}
	printf("%d\n", c);
}
}