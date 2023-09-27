#include <stdio.h>

typedef struct{
  char c;
  int n;
}back;

int main()
{
  back card1[36],card2[36],tmp[36],temp;
  char c;
  int minj,i,j,a,N;

  scanf("%d",&N);
  
  for(i=0;i<N;i++){
    scanf(" %c%d",&card1[i].c,&card1[i].n);
    scanf("%c",&c);
  }

  for(j=0;j<N;j++){
    card2[j]=card1[j];
  }

  a=0;
  
  for(i=1;i<10;i++){
    for(j=0;j<N;j++){
      if(card1[j].n==i){
	tmp[a]=card1[j];
	a++;
      }
    }
  }

  for(i=0;i<N;i++){
    for(j=1;j<N;j++){
      if(card1[j].n<card1[j-1].n){
	temp=card1[j];
	card1[j]=card1[j-1];
	card1[j-1]=temp;
      }
    }
  }

  for(i=0;i<N;i++){
    if(i!=N-1) printf("%c%d ",card1[i].c,card1[i].n);
    else printf("%c%d\n",card1[i].c,card1[i].n);
  }

  a=0;

  for(i=0;i<N;i++){
    if(card1[i].c!=tmp[i].c){
      printf("Not stable\n");
      a++;
      break;
    }
  }
  if(a==0) printf("Stable\n");

  for(i=0;i<N;i++){
    minj=i;
    for(j=i;j<N;j++){
      if(card2[j].n<card2[minj].n) minj=j;
    }
    temp=card2[i];
    card2[i]=card2[minj];
    card2[minj]=temp;
  }

  for(i=0;i<N;i++){
    if(i!=N-1) printf("%c%d ",card2[i].c,card2[i].n);
    else printf("%c%d\n",card2[i].c,card2[i].n);
  }

  a=0;

  for(i=0;i<N;i++){
    if(card2[i].c!=tmp[i].c){
      printf("Not stable\n");
      a++;
      break;
    }
  }
  if(a==0) printf("Stable\n");
  return 0;
}