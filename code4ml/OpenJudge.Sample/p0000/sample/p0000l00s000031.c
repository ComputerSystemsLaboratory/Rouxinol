#include<stdio.h>
int main(){
	int list[10];
	int lank[3]={-10000},chk[3]={11},f=0,ch=11;
	int i,j,c;
	for(i=0;i<10;i++){
		scanf("%d",&list[i]);
	}
	for(c=0;c<3;c++){
		for(i=0;i<10;i++){
			for(j=0;j<3;j++){
				if(chk[j]==i){
					f=1;
				}
			}
			if(f==1){
				f=0;
			}else{
				if(lank[c]<=list[i]){
					lank[c]=list[i];
					ch=i;
				}
			}
		}
		chk[c]=ch;
	}
	for(c=0;c<3;c++){
		printf("%d\n",lank[c]);
	}
	return 0;
}