#include<stdio.h>

int main(){
	int y,m,d,i,j,t=0,n;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d",&y,&m,&d);
		if(!(y%3))t=20-d+1+20*(10-m);
		else{
			if(!(m%2))t=19-d+1+39*(5-m/2);
			else t=20-d+1+19+39*(4-m/2);
		}
		for(i=y+1;i<1000;i++){
			if(!(i%3))t+=200;
			else t+=195;
		}
		printf("%d\n",t);
	}
	return 0;
}