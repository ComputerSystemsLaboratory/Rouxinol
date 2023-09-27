#include <stdio.h>
#include <string.h>
#define N 36

struct Card{
  int num;
  char mozi;
};

int main(){
  struct Card C1[N], C2[N];
  int i, j, n, key, mini, flag = 0;
  char swap, ch;

  
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf(" %c%d", &C1[i].mozi,  &C1[i].num);
  }

  for(i = 0; i < n; i++) C2[i] = C1[i];

  //bubble
  for(i = 0; i < n; i++){
    for(j = n-1; j > i; j--){
      if(C1[j].num < C1[j-1].num){
	key = C1[j].num;
	swap = C1[j].mozi;
	C1[j].num = C1[j-1].num;
	C1[j].mozi = C1[j-1].mozi;
	C1[j-1].num = key;
	C1[j-1].mozi = swap;
      }
    }
  }

  for(i = 0; i < n; i++){
    if(i > 0) printf(" ");
    printf("%c%d",C1[i].mozi, C1[i].num);
  }
  printf("\n");
  printf("Stable\n");

  // selection
    for(i = 0; i < n; i++){
    mini = i;
    for(j = i; j < n; j++){
      if(C2[j].num < C2[mini].num) mini = j;
    }
    key = C2[i].num;
    swap = C2[i].mozi;
    C2[i].num = C2[mini].num;
    C2[i].mozi = C2[mini].mozi;
    C2[mini].num = key;
    C2[mini].mozi = swap;
  }

  for(i = 0; i < n; i++){
    if(i > 0) printf(" ");
    printf("%c%d",C2[i].mozi, C2[i].num);
  }
  printf("\n");

  for(i = 0; i < n; i++){
    if(C1[i].mozi != C2[i].mozi) flag = 1;
  }
  if(flag == 0) printf("Stable\n");
  else printf("Not stable\n");
  return 0;
}