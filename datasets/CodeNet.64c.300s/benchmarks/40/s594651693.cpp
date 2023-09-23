#include<cstdio>

int main(void){
char s[1200];

fgets(s,sizeof(s),stdin);

char a,A;
a='a';
A='A';
int c;
c=A-a;

int i;
for(i=0;i<sizeof(s);i++){
	if((s[i]>=a)&&(s[i]<=a+25)){
		s[i]=s[i]+c;
	} else if((s[i]>=A)&&(s[i]<=A+25)){
		s[i]=s[i]-c;
	};
};


	printf("%s",s);


return 0;
}