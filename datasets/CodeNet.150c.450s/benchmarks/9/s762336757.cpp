#include<cstdio>
#include<cstring>

int main(void){
int i,j;
int m[256];
int s[256]={0};
char c[256][201];
int d[256]={0};
int k=0;
while(1){
	scanf("%s",c[k]);
	if(strcmp(c[k],"-")==0) break;
	while(c[k][d[k]]!='\0'){d[k]++;};
	
	scanf("%d",&m[k]);
	for(i=0;i<m[k];i++){
		scanf("%d",&j);
		s[k]=s[k]+j;
	};
	s[k]=s[k]%d[k];
	k++;
}

for(i=0;i<k;i++){
	for(j=0;j<d[i];j++){
		c[i][j+d[i]]=c[i][j];
	};
	for(j=0;j<d[i];j++){
		printf("%c",c[i][j+s[i]]);
	};
	printf("\n");
};
return 0;
}