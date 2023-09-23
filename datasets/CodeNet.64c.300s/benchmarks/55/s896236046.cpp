#include<stdio.h>                                                         
                                                                          
int main(void){                                                           
                                                                          
  int array[10000];                                                       
  int i = 1;                                                              
  int j;                                                                  
  int k;                                                                  
                                                                          
  do {                                                                    
    scanf("%d",&array[i]);                                                
    i++;                                                                  
  } while (array[i-1] != 0);                                              
                                                                          
  k = i-2;                                                                
                                                                          
  for(j = 1,i = 1;j <= k;j++,i++) {                                       
    printf("Case %d: %d\n",j,array[i]);                                   
  }                                                                       
                                                                          
  return 0;                                                               
} 