#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 20000
typedef struct {
  int maxi;
  int maxj;
  double area;
}INF;

int main()
{
  int i,j,n,m=0,sum_p=0,sum_m=0,min=0,Area[MAX+1],k=0,sum=0;
  char word[MAX];
  INF L[MAX/2];

  scanf("%s",word);

  n=strlen(word);
  Area[0]=0;

  for(i=0;i<n;i++){
    if(word[i]=='/') sum_p++;
    if(word[i]=='\\') sum_m--;
    Area[i+1]=sum_p+sum_m;
    if(min>Area[i+1]){
      min=Area[i+1];
    }
  }

  for(i=0;i<n+1;i++){
    Area[i]=Area[i]-min;
  }

  for(i=0;i<n+1;i++){
    if(word[i]=='\\'){
      j=i+1;
      while(1){
	if(Area[i]==Area[j]){
	  L[m].maxi=i;
	  L[m].maxj=j;
	  m++;
	  i=j-1;
	  break;
	};
	j++;
	if(j==n+1) break;
      }
    }
  }

  for(i=0;i<m;i++){
    for(j=L[i].maxi;j<L[i].maxj;j++){
      if(word[j]=='\\'||word[j]=='/'){
	L[i].area+=(1/2+abs(Area[L[i].maxi]-Area[j]));
      }
      if(word[j]=='_') L[i].area+=Area[L[i].maxi]-Area[j];
    }
  }

  for(i=0;i<m;i++){
    sum=sum+L[i].area;
  }

  printf("%d\n%d",sum,m);

  for(i=0;i<m;i++){
    printf(" %d",(int)L[i].area);
  }

  printf("\n");

  return 0;
}