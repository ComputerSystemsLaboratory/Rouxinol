#include <stdio.h>
#include <math.h>

int main(){
	int m,f,r;
	while(1){
		scanf("%d %d %d",&m,&f,&r);
		if(m+f+r==-3) break;
		if(m==-1||f==-1) printf("F\n");
		else if(m+f>=80) printf("A\n");
		else if(m+f>=65) printf("B\n");
		else if(m+f>=50||(m+f>=30 && r>=50)) printf("C\n");
		else if(m+f>=30) printf("D\n");
		else printf("F\n");
	}
	return 0;
}