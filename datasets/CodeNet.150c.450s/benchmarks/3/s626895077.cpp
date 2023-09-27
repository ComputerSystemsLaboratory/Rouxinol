#include<stdio.h>
#include<string.h>
char *replace(char* m,int a,int b){
	char p[1024];
	int i=0;
	scanf("%s",p);
	for(int j=a;j<=b;j++){
		m[j]=p[i];
		i++;
	}
	return m;
}
char *reverce(char* m,int a,int b){
	char s[1024];
	int t=a+b;
	strcpy(s,m);
	for(int i=a;i<=b;i++){
		s[t-i]=m[i];
	}
	strcpy(m,s);
	return m;
}
void print(int s,int e,char* st){
	for(int i=s;i<=e;i++){
		printf("%c",st[i]);
	}
	printf("\n");
	return;
}

int main(void)
{
	char str[1024];
	int q;
	scanf("%s",str);
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		char cmd[8];
		int a,b;
		scanf("%s%d%d",cmd,&a,&b);
		if(strcmp(cmd,"print")==0){
			print(a,b,str);
		}else if(strcmp(cmd,"reverse")==0){
			reverce(str,a,b);
		}else if(strcmp(cmd,"replace")==0){
			replace(str,a,b);
		}
	}
    return 0;
}