#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		int b,c,d;
		scanf("%d%d%d",&b,&c,&d);
		int ret=0;
		while(b<1000){
			ret++;
			d++;
			if(b%3&&c%2==0&&d==20){
				c++;
				d=1;
			}else if(d==21){
				c++;
				d=1;
			}
			if(c>10){
				b++;
				c=1;
			}
		}
		printf("%d\n",ret);
	}
}