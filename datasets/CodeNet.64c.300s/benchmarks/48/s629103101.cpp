#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

#define N 1000000L
bool num[N];

void furui(void){
  long int i;
  int divide;
  int rt = 1000;
  for(i = 0L; i < N; i++){
    num[i] = true;
  }
  num[0L] = false;
  num[1L] = false;
  for(divide = 2; divide <= rt; divide++){
    if(num[divide] == false) continue;
    for( i = (long int) divide; i < N; i+= divide){
      num[i] = false;
    }
    num[divide] = true;
  }
}

int main(void){
  int c, i, j;
  long int k;
  char buf[7];
  long int n;
  long int count;

  furui();

  for(j = 0; j < 30; j++){
    for(i = 0;(c = getchar()) != EOF ;i++){

      if(c == '\n'){
        buf[i] = '\0';
        break;
      }
      buf[i] = c;
    }
    if(c == EOF) break;
    n = atol(buf);
    count = 0L;
    for(k = 1L; k <= n; k++){
      if(num[k] == true) count++;
    }
    std::cout << count << std::endl;
  }
  return 0;
}