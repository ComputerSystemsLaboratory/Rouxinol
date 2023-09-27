#include<stdio.h>
int main()
{
	int m,d;
	while(!(scanf("%d",&d)==EOF)){
		m=0;
		for(int i=0;(d*i)<(600-d);i++){
			m+=((i+1)*d*(i+1)*d*d);
		}
		printf("%d\n",m);
	}
	return 0;
}