#include <stdio.h>
int main()
{
  char card[20001];
  int maze,i,mvc,j,fc,cm,end=0;
  while(1){
    cm=0;
    while(1){
      scanf("%c",&card[cm]);
      if(card[0]=='\n'){
	continue;
      }
      if(card[0]=='-'){
	goto theend;
      }
      if(card[cm]=='\n'&&cm!=0){
	break;
      }  
      cm++;
    }
    //printf("%s",card);//
    scanf("%d",&maze);
    fc=0;
    for(i=0;i<maze;i++){
      scanf("%d",&mvc);
      for(j=0;j<mvc;j++){
	card[fc+cm]=card[fc];
	fc++;
      }
    }
    for(i=0;i<cm;i++){
      printf("%c",card[fc]);
      fc++;
    }
    printf("%c",'\n');
  }
 theend:
  return 0;
}