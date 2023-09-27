#include <stdio.h>                                                                                                                                    
                                                                                                                                                      
int main(void) {                                                                                                                                      
  int x[3000];                                                                                                                                        
  int y[3000];                                                                                                                                        
  int i = 0;                                                                                                                                          
  int j;                                                                                                                                              
  int k;                                                                                                                                              
                                                                                                                                                      
  do {                                                                                                                                                
    scanf("%d %d",&x[i],&y[i]);                                                                                                                       
                                                                                                                                                      
    if (x[i] > y[i]) {                                                                                                                                
      k = y[i];                                                                                                                                       
      y[i] = x[i];                                                                                                                                    
      x[i] = k;                                                                                                                                       
    }                                                                                                                                                 
                                                                                                                                                      
    i++;                                                                                                                                              
  } while (x[i-1] != 0 || y[i-1] != 0);                                                                                                               
                                                                                                                                                      
  for (j = 0;j < i;j++) {                                                                                                                             
    if (x[j] == 0 && y[j] == 0) break;                                                                                                                
    printf("%d %d\n",x[j],y[j]);                                                                                                                      
  }                                                                                                                                                   
  return 0;                                                                                                                                           
}