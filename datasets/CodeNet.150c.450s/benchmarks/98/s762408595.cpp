#include<stdio.h>
int taro[100];
int hanako[100];
int tarosum;
int hanakosum;
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b),a){
		tarosum=hanakosum=0;
		for(int i=0;i<a;i++){
			scanf("%d",taro+i);
			tarosum+=taro[i];
		}
		for(int i=0;i<b;i++){
			scanf("%d",hanako+i);
			hanakosum+=hanako[i];
		}
		int min=99999999;
		int rett=0;
		int reth=0;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(tarosum-taro[i]+hanako[j]==hanakosum-hanako[j]+taro[i]&&min>taro[i]+hanako[j]){
					min=taro[i]+hanako[j];
					rett=taro[i];
					reth=hanako[j];
				}
			}
		}
		if(min==99999999)printf("-1\n");
		else printf("%d %d\n",rett,reth);
	}
}