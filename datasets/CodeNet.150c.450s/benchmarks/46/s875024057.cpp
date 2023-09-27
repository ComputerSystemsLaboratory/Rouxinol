#include<cstdio>

int main(void){
int n[256],i,x[256],a=0,j,k=-1,m;
do{
	k++;
	scanf ("%d%d",&n[k],&x[k]);
}while((n[k]!=0)||(x[k]!=0));

for (m=0;m<k;m++){
	for (i=1;i<=n[m];i++){
		for(j=1;j<i;j++){
			if ((x[m]-i-j>=1)&&(x[m]-i-j<j)){
				a++;
			};
		};
	};
	
	printf("%d\n",a);
	a=0;
};
return 0;
}