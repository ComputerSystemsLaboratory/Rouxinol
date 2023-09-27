#include <stdio.h>

int main(){
	while(1){
		int n,m,taro[100],hanako[100];
		scanf("%d %d",&n,&m);
		if(!n) break;
		int st=0,sh=0;
		for(int i=0;i<n;i++){
			scanf("%d",&taro[i]);
			st+=taro[i];
		}
		for(int i=0;i<m;i++){
			scanf("%d",&hanako[i]);
			sh+=hanako[i];
		}
		bool f=false;
		int anst,ansh;
		int ct,ch;
		int cs=114514;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				ct=st-taro[i]+hanako[j];
				ch=sh-hanako[j]+taro[i];
				if(ct==ch&&cs>taro[i]+hanako[j]){
					f=true;
					anst=taro[i];
					ansh=hanako[j];
					cs=taro[i]+hanako[j];
				}
			}
		}
		if(f)
			printf("%d %d\n",anst,ansh);
		else
			puts("-1");
	}
	return 0;
}