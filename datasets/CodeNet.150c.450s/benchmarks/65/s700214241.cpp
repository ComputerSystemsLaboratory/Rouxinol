#include<stdio.h>
 
struct card{
  char mark;
  int num;
  int we;
};
 
int main(){
   
  int i,j,n,s,minj,stable=0;
  struct card card[37],card2[37];
   
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf(" %c%d",&card[i].mark,&card[i].num);
    card[i].we = i;
    card2[i]= card[i];
  }
   
  //BubbleSort
  for(i=0;i<n;i++){
    for(j=n-1;j>i;j--){
      if(card[j].num<card[j-1].num){
    card[36] = card[j-1];
    card[j-1] = card[j];
    card[j] = card[36];
      }
    }
  }
   
  //SelectionSort
  for(i=0;i<n;i++){
    minj = i;
    for(j=i;j<n;j++){
      if(card2[j].num<card2[minj].num){
    minj = j;
      }
    }
    card2[36] = card2[i];
    card2[i] = card2[minj];
    card2[minj] = card2[36];
 
  }
   
  //print BubbleSort
  for(i=0;i<n;i++){
    printf("%c%d",card[i].mark,card[i].num);
    if(i==n-1){
      printf("\n");
      break;
    }
    printf(" ");
  }
  printf("Stable\n");
   
   
  //print SelectionSort
  for(i=0;i<n;i++){
    printf("%c%d",card2[i].mark,card2[i].num);
    if(i==n-1){
      printf("\n");
      break;
    }
    printf(" ");
  }
   
  for(i=0;i<n;i++){
    if(card2[i].we>card2[i+1].we&&card2[i].num==card2[i+1].num)stable =1;
  }
   
  if(stable == 1){
    printf("Not stable\n");
  }else{
    printf("Stable\n");
  }
   
  return 0;
}