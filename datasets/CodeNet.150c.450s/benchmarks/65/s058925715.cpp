#include<stdio.h>

typedef struct{
  char mark;
  int number;
}Card;

int main(){
  int a,b,i,j,minj,num_card,stable1=1,stable2=1;
  Card card1[36],card2[36],check[36],swap;

  //??\???
  scanf("%d",&num_card);
  for(i = 0;i < num_card; i++){
    scanf(" %c%d",&card1[i].mark,&card1[i].number);
	}

  for(i = 0;i < num_card; i++){
    check[i] = card2[i] = card1[i];
 
	}

  //??????(BubbleSort)
  for(i = 0; i < num_card; i++){
    for(j = num_card-1; j > i; j--){
      if(card1[j].number < card1[j-1].number){

	swap = card1[j];
	card1[j] = card1[j-1];
	card1[j-1]= swap;
      } 
    }
  }
  for(i = 0; i < num_card; i++){
    for(j = i+1; j < num_card; j++){
      for(a = 0; a < num_card; a++){
	for(b = a+1; b < num_card; b++){
	  if(check[i].number == check[j].number && check[i].number == card1[b].number && check[i].mark == card1[b].mark && check[j].number == card1[a].number && check[j].mark == card1[a].mark){
	    stable1 = 0;
	  }
	}
      }
    }
  }
  //??????
  for(i = 0; i < num_card-1; i++){
    printf("%c%d ",card1[i].mark,card1[i].number);
  }
  printf("%c%d\n",card1[i].mark,card1[i].number);
  if(stable1 == 1){
    printf("Stable\n");
  }else{
    printf("Not stable\n");
  }
  

  //??????(SelectionSort)
  for(i = 0; i < num_card; i++){
    minj = i;
    for(j = i; j < num_card; j++){
      if(card2[j].number < card2[minj].number){
	minj = j;
      }
    }
    swap = card2[i];
    card2[i] = card2[minj];
    card2[minj] = swap;
      
   
  }
  
  for(i = 0; i < num_card; i++){
    for(j = i+1; j < num_card; j++){
      for(a = 0; a < num_card; a++){
	for(b = a+1; b < num_card; b++){
	  if(check[i].number == check[j].number && check[i].number == card2[b].number && check[i].mark == card2[b].mark && check[j].number == card2[a].number && check[j].mark == card2[a].mark){
	    stable2 = 0;
	  }
	}
      }
    }
  }

  //??????
  for(i = 0; i < num_card-1; i++){
    printf("%c%d ",card2[i].mark,card2[i].number);
  }
  printf("%c%d\n",card2[i].mark,card2[i].number);
  if(stable2 == 1){
    printf("Stable\n");
  }else{
    printf("Not stable\n");
  }

  return 0;
 
}