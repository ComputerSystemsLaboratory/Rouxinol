#include <stdio.h>

int main(){
	int a,b,c,d,i=0;
	
	scanf("%d %d %d",&a,&b,&c);
	d = a;
	while(d <= b){
		if(c % d == 0){
		i++;
		}
		d++;
		
	}printf("%d\n",i);
	
	return 0;
}