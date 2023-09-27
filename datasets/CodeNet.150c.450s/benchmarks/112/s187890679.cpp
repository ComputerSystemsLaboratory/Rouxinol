#include<stdio.h>


int main(){
	int n,m;
	int i,j;
	char c[1000000][2];
	char t[1000000];
	int f;
	while(scanf("%d",&n),n){
		for(i=0;i<n;i++){
			scanf("%s",&c[i][0]);
			scanf("%s",&c[i][1]);
		}

		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf(" %s",&t[i]);
		}

		for(i=0;i<m;i++){
			f=-1;
			for(j=0;j<n;j++){
				if(t[i]==c[j][0]){
					f=j;
				}
			}

			if(f!=-1){
				printf("%c",c[f][1]);
			}else if(f==-1){
				printf("%c",t[i]);
			}
		}
		printf("\n");
	}
	return 0;
}