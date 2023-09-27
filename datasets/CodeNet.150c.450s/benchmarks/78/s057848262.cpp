#include<stdio.h>
#include<string.h>

char table[1000000][1],tablek[1000000];
int po[182];

int main(){
	int i,j,k,n;
	
	memset(po,0,sizeof(po));
	memset(table,0,sizeof(table));
	memset(tablek,0,sizeof(tablek));
	
	for(i=1;i<182;i++){
		po[i]=i*(i+1)*(i+2)/6;
		if(po[i]<1000000)table[po[i]][0]=1;
	}
	
	for(i=1;i<5;i++){
		for(j=1;j<1000000;j++){
			if(table[j][0]==i){
				for(k=1;k<182;k++){
					if(j+po[k]>=1000000)break;
					if(table[j+po[k]][0]==0)table[j+po[k]][0]=i+1;
				}
			}
		}
	}
	
	n=1000000-1;
	
	for(i=1;i<182;i++){
		if(po[i]<1000000 && po[i]%2==1){
			tablek[po[i]]=1;
			--n;
		}
	}
	for(i=1;n>0;i++){
		for(j=1;j<1000000;j++){
			if(tablek[j]==i){
				for(k=1;k<182;k++){
					if(j+po[k]>=1000000)break;
					if(tablek[j+po[k]]==0 && po[k]%2==1){
						tablek[j+po[k]]=i+1;
						--n;
					}
				}
			}
		}
	}
	
	while(scanf("%d",&n)>=0){
		if(n==0)break;
		printf("%d %d\n",table[n][0],tablek[n]);
	}
	
	
	return 0;
}