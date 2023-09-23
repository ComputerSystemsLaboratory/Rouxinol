#include<stdio.h>
int  main(){
  int n,m,i,j,sum=0,ans=0; 
  scanf("%d %d",&n,&m);
  int data[m+1][n+1];
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&data[j][i]);
      sum+=data[j][i];
      ans+=data[j][i];
    }
    data[m][i]=sum;
    sum=0;
  }
  sum=0;
  for(j=0;j<m;j++){
    for(i=0;i<n;i++){
      sum+=data[j][i]; 
    }
    data[j][n]=sum;
    sum=0;
  }
  data[m][n]=ans;
  for(i=0;i<n+1;i++){
    for(j=0;j<m+1;j++){
      if(j!=0&&j!=m+1){
	printf(" ");
      }
      printf("%d",data[j][i]);
    }
    printf("\n");
  }
  return(0);
}