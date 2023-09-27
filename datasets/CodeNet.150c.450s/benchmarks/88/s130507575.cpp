#include <stdio.h>
#include <math.h>
#define MAXINPUT 100

int main(void){
	int h[MAXINPUT],w[MAXINPUT];
	int ansh[MAXINPUT]={},answ[MAXINPUT]={};
	int i=0,j=0;
	int ans=0;
	int num=0;
	int k;
	while(i<MAXINPUT){
		scanf("%d %d",&h[i],&w[i]);
		if(h[i]==0 && w[i]==0)break;
		i++;
		num++;
	}

	for(i=0;i<num;i++,ans=0){
		ans=h[i]*h[i]+w[i]*w[i];
		for(;(ansh[i]==0||answ[i]==0);){
			for(j=1;k==0;j++){
				double temp=ans-(j*j);
				double tempa=0;
				if(temp<=0){
					k=1;
					break;
				}
				temp=sqrt(temp);
				temp=modf(temp,&tempa);
				if(temp==0 && tempa<=150 && j<tempa){
					if(tempa*tempa+j*j==h[i]*h[i]+w[i]*w[i] && j<=h[i]){
						continue;
					}
					ansh[i]=j;
					answ[i]=(int)tempa;
					printf("%d %d\n",ansh[i],answ[i]);
					break;
				}
			}
		ans++;
		k=0;
		}
	}

	return 0;
}