#include<cstdio>
#include<cstring>
#include<cstdlib>

char str[1001];
char s[100][1001];
int m=0;
int print(int, int);
int reverse(int, int);
int replace(int, int, char p[]);

int main(void){
int n,i,j,k,a,b;
scanf("%s",str);
scanf("%d",&n);

for(i=0;i<n;i++){
	char command[20],com[10];
		scanf("%s",com);
		scanf("%d%d",&a,&b);

	if(strcmp(com,"print")==0){
		print(a,b);
	}else if(strcmp(com,"reverse")==0){
		reverse(a,b);
	}else if(strcmp(com,"replace")==0){
		char p[b-a+3];
		scanf("%s",p);
		replace(a,b,p);
	}
};
for(i=0;i<m;i++){
	printf("%s\n",s[i]);
}
return 0;
}

int print(int a,int b){
int i;
for (i=0;i<=b-a;i++){
	s[m][i]=str[i+a];
}
	s[m][b-a+1]='\0';
	m++;

return 0;
}

int reverse(int a,int b){
char t[b-a+1];
int i;
for(i=0;i<=b-a;i++){
	t[i]=str[a+i];
};
for(i=0;i<=b-a;i++){
	str[b-i]=t[i];
};
return 0;
}

int replace(int a,int b,char p[]){
int i;
for(i=0;i<=b-a;i++){
	str[a+i]=p[i];
}
return 0;
}