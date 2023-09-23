#include<stdio.h>
int main(void)
{
	int gohyaku,hyaku,gozyu,zyu,go,ichi;
	int dai,otsuri,mai;
	scanf("%d",&dai);
	while(dai!=0){
		otsuri=1000-dai;
		gohyaku=0;
		hyaku=0;
		gozyu=0;
		zyu=0;
		go=0;
		ichi=0;
		while(otsuri!=0){
			while(otsuri>=500){
				otsuri=otsuri-500;
					gohyaku++;
			}
			while(otsuri>=100){
				otsuri=otsuri-100;
					hyaku++;
			}
			while(otsuri>=50){
				otsuri=otsuri-50;
					gozyu++;
			}
			while(otsuri>=10){
				otsuri=otsuri-10;
					zyu++;
			}
			while(otsuri>=5){
				otsuri=otsuri-5;
					go++;
			}
			while(otsuri>=1){
				otsuri=otsuri-1;
					ichi++;
			}
			mai=gohyaku+hyaku+gozyu+zyu+go+ichi;
			printf("%d\n",mai);
			scanf("%d",&dai);
		}
	}
	return 0;
}