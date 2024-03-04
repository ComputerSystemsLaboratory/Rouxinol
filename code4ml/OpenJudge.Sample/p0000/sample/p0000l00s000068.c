#include<stdio.h>
int main(void){

 int a[10000],A,i,j;
 for(i=0;i<10;i++){
scanf("%d",&a[i]);
 	}

  for(i=0;i<10;i++){
 for(j=0;j<10;j++){
if(i!=j){

if(a[i]>a[j]){
A=a[i];
a[i]=a[j];
a[j]=A;
	}
	
	}
	}
 	}

 	for(i=0;i<3;i++){
printf("%d\n",a[i]);
 		}


return 0;
	}