#include <stdio.h>

int main(void){

  int m,f,r;
  char rank[5] = {'A','B','C','D','F'};

  for ( ; ; ){
    scanf("%d %d %d",&m,&f,&r);
    if (m == -1 && f == -1 && r == -1){
      break;
    }else if (m == -1 || f == -1 || m + f < 30){
      printf("%c\n",rank[4]);
    }else if (m + f >= 80){
      printf("%c\n",rank[0]);
    }else if (m + f >= 65){
      printf("%c\n",rank[1]);
    }else if (m + f >= 50){
      printf("%c\n",rank[2]);
    }else if (m + f >= 30){
      if (r >= 50){
        printf("%c\n",rank[2]);
      }else{
        printf("%c\n",rank[3]);
      }
    }
  }
  return 0;
}

