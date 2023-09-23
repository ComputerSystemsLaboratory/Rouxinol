#include<cstdio>

int main(void){

int c=0,n,m,i,j;
//nyuuryoku
scanf("%d%d",&n,&m);
int nm;
nm=n*m;
int a[nm];
int b[m];
for(i=0;i<nm;i++){
	scanf("%d",&a[i]);
};
for(i=0;i<m;i++){
	scanf("%d",&b[i]);
};
//shuturyoku
for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		c=c+a[i*m+j]*b[j];
		
	};
	printf("%d\n",c);
	c=0;
};
return 0;
}