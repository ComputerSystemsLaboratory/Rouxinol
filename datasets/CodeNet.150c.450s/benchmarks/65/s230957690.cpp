#include <stdio.h>
#define X 36
 
typedef struct{
  char mark;
  int value;
  int order;
}trump;
 
int main()
{
  int N,i,minj,flag=1,j;
  trump C1[X],C2[X],temp;
 
  scanf("%d",&N);

  if(N>=1 && N<=36){
    for(i=0;i<=N-1;i++){
      while(1){
	scanf("%c",&C1[i].mark);
	if(C1[i].mark!='D' && C1[i].mark!='C' && C1[i].mark!='S' && C1[i].mark!='H'){
	  continue;
	}
	scanf("%d",&C1[i].value);
	break;
      }
      C1[i].order=i+1;
      C2[i]=C1[i];
    }
 
    for(i=0;i<=N-1;i++){
      for(j=N-1;j>=i+1;j--){
	if(C1[j].value < C1[j-1].value){
	  temp=C1[j];
	  C1[j]=C1[j-1];
	  C1[j-1]=temp;
	}
      }
    }
 
    for(i=0;i<N-1;i++){
      printf("%c%d ",C1[i].mark,C1[i].value);
    }
 
    printf("%c%d\n",C1[N-1].mark,C1[N-1].value);
 
    for(i=0;i<=N-1;i++){
      if(C1[i].value==C1[i-1].value && C1[i].order-C1[i-1].order<0){
	flag=0;
      }
    }
 
    if(flag==1){
      printf("Stable\n");
    }
    else{
      printf("Not stable\n");
    }
 
    flag=1;
 
    for(i=0;i<=N-1;i++){
      minj=i;
 
      for(j=i;j<=N-1;j++){
	if(C2[j].value < C2[minj].value){
	  minj=j;
	}
      }
      temp=C2[i];
      C2[i]=C2[minj];
      C2[minj]=temp;
    }
 
    for(i=0;i<N-1;i++){
      printf("%c%d ",C2[i].mark,C2[i].value);
    }
 
    printf("%c%d\n",C2[N-1].mark,C2[N-1].value);
 
    for(i=1;i<N;i++){
      if(C2[i].value==C2[i-1].value && C2[i].order-C2[i-1].order<0){
	flag=0;
      }
    }
 
    if(flag==1){
      printf("Stable\n");
    }
    else{
      printf("Not stable\n");
    }
  }

  return 0;
}