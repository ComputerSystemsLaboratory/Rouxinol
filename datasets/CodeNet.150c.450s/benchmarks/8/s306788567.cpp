#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,tp=0,hp=0,tl,hl,mijikai,gosa=0;
	char t[128],h[128];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s%s",t,h);
		tl=strlen(t);
		hl=strlen(h);
		mijikai=0;
		gosa=hl-tl;
		if(tl>hl){
			mijikai=1;
			gosa=tl-hl;
		}
		for(int k=0;k<gosa;k++){
			if(mijikai==0){
				strcat(t," ");
			}else{
				strcat(h," ");
			}
		}
		if(strcmp(t,h)>0){
			tp+=3;
		}else if(strcmp(t,h)==0){
			tp++;
			hp++;
		}else{
			hp+=3;
		}
	}
	printf("%d %d\n",tp,hp);
    return 0;
}