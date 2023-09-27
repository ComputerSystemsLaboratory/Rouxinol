#include<cstdio>

int main(void){
char s[202];
char p[101];
int i,j,n,m;

scanf("%s",s);
scanf("%s",p);
n=0;
while(s[n]!='\0'){n++;};
//n???s???????????°

for(i=0;i<n;i++){
	s[i+n]=s[i];
};

m=0;
while(p[m]!='\0'){m++;};

bool b=false;
for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		if(s[i+j]!=p[j]) break;
	};
	
	if (j==m) {
		b=true;
	};
};
if(b){
	printf("Yes\n");
} else {
	printf("No\n");
};
return 0;

}