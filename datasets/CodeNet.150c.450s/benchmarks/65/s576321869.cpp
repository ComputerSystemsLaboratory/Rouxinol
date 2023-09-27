#include<stdio.h>
#define N 36

typedef struct{
  char kind;
  int num;
}Card;

void bubblesort(Card * ,int);
void selectionsort(Card *,int);
//void swap(Card *,Card *);
int isStable(Card *,Card *,int n);

int main(){
  int n;
  int i;
  Card card1[N],card2[N];
  int flag=0;
  
  scanf("%d",&n);//枚数の入力
  for(i=0;i<n;i++){
    scanf(" %c%d",&card1[i].kind,&card1[i].num);
    card2[i]=card1[i];
  }
  
  
  bubblesort(card1,n);
  for(i=0;i<n-1;i++){
    printf("%c%d ",card1[i].kind,card1[i].num);
  }
  printf("%c%d\n",card1[n-1].kind,card1[n-1].num);
  printf("Stable\n");
  
  selectionsort(card2,n);
  for(i=0;i<n-1;i++){
    printf("%c%d ",card2[i].kind,card2[i].num);
  }
  printf("%c%d\n",card2[n-1].kind,card2[n-1].num);
  for(i=0;i<n;i++){
    flag=flag+isStable(card1,card2,n);
  }
  if(flag==0)printf("Not stable\n");
  else printf("Stable\n");
  return 0;
}

void bubblesort(Card A[],int n){
  int i,j;
  Card temp;
  for(i=0;i<=n-1;i++){
    for(j=n-1;j>=i+1;j--){
      if(A[j].num<A[j-1].num){
	//swap(&A[j],&A[j-1]);
	temp=A[j];
	A[j]=A[j-1];
	A[j-1]=temp;
      }
    }
  }
  
}

void selectionsort(Card A[],int n){
  int i,j,minj;
  Card temp;
  for(i=0;i<=n-1;i++){
    minj=i;
    for(j=i;j<=n-1;j++){
      if(A[j].num<A[minj].num)
	minj=j;
      }
    
   
   
      temp=A[i];
      A[i]=A[minj];
      A[minj]=temp;
    }
  
}
 
/*void swap(Card *a,Card *b){
  Card temp;
  temp=*a;
  *a=*b;
  *b=temp;
  }*/

int isStable(Card *a,Card *b,int n){
  int i;

  for(i=0;i<n;i++){
    if(a[i].kind!=b[i].kind) 
    return 0;
  }
  return 1;
}

