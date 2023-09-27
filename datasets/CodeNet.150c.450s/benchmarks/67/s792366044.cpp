#include <stdio.h>

int main(){

int i,j,k;
int N;
int sum=0;
int count=0;

while(1){
i=0;
j=0;
k=0;
N=0;
sum=0;
count=0;
scanf("%d",&N);
if(N ==0){break;}
for(i=1;i<=N; i++){
  //printf("%d ",i);
  sum=i;
  for(j=1;j<=N;j++){
     sum+=(i+j);
     //printf("%d ",i+j);
     if(sum == N){
	//printf("N\n"); 
	count++;
	break;
     }
  }
//printf("\n");
sum=0;
}
printf("%d\n",count);
}
return 0;


}