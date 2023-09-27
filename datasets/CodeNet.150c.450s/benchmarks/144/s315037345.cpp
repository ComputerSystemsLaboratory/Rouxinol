#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	long i,j,k,z;
	long n,m,l,sum,a[100][100],b[100][100];
	char input[6002],*p=NULL;
	
	fgets(input,sizeof input,stdin);
	sscanf(input,"%ld %ld %ld",&n,&m,&l);
	
	for(i=0;i<n;i++){
		fgets(input,sizeof input,stdin);
		p=strtok(input," ");
		a[i][0]=atol(p);
		
		for(j=1;j<m;j++){
			p=strtok(NULL," ");
			a[i][j]=atol(p);
		}
		
	}
	for(i=0;i<m;i++){
		fgets(input,sizeof input,stdin);
		p=strtok(input," ");
		b[i][0]=atol(p);
		
		for(j=1;j<l;j++){
			p=strtok(NULL," ");
			b[i][j]=atol(p);
		}
		
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			sum=0;
			for(k=0;k<m;k++){
				sum+=a[i][k]*b[k][j];
			}
			printf("%ld",sum);
			if(j+1!=l){
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}