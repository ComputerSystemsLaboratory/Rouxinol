#include <stdio.h>
#define MAX 150
 
int main (void){
 
  int n, m;
  int loop = 1;
  int i, j;
  int action;
  int min;
  int pn[MAX] = {};
  int pm[MAX] = {};
  int change[2] = {};

  
  while (loop){
    scanf("%d %d", &n, &m);
    if (n == 0 && m == 0){
      loop = 0;
    }else{
      action = 0;
      pn[n] = 0;
      pm[m] = 0;
      for(i=0; i<n; i++){
    scanf("%d", &pn[i]);
    pn[n] += pn[i]; //使わない列に合計を入れる
      }
       
      for(j=0; j<m; j++){
    scanf("%d", &pm[j]);
    pm[m] += pm[j];
      }
 
      for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      pn[n+1] = pn[n] - pn[i] + pm[j];
      pm[m+1] = pm[m] - pm[j] + pn[i];
      if (pn[n+1] == pm[m+1]){
        if(action == 0){
        change[0] = pn[i];
        change[1] = pm[j];
        min = pn[i] + pm[j];
        action = 1;
        }else{
          if (min > pn[i] + pm[j]){
        min = pn[i] + pm[j];
          }
        }
      }
    }
      }
 
      if(action == 1){
    printf("%d %d\n", change[0], change[1]);
      }else{
    printf("-1\n");
      }   
    }
  }
   
  return 0;
}
