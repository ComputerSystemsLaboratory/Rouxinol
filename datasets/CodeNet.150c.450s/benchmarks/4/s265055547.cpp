#include<cstdio>

int main(void){

int a[256],b[256],c[256],i=-1,j;
do{
	i++;
	scanf("%d%d%d",&a[i],&b[i],&c[i]);
}while((a[i]!=-1)||(b[i]!=-1)||(c[i]!=-1));

for(j=0;j<i;j++){
	if ((a[j]==-1)||(b[j]==-1)){
		printf("F\n");
	}else if (a[j]+b[j]>=80){
		printf("A\n");
	}else if(a[j]+b[j]>=65){
		printf("B\n");
	}else if((a[j]+b[j]>=50)||((a[j]+b[j]>=30)&&(c[j]>=50))){
		printf("C\n");
	}else if(a[j]+b[j]>=30){
		printf("D\n");
	}else {
		printf("F\n");
	}
}
return 0;
}