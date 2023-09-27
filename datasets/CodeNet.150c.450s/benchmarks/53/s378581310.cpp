#include <bits/stdc++.h>                                        
using namespace std;                                            
                                                                
int main() {                                                    
  int n;                                                        
  cin >> n;                                                     
  int x=n;                                                      
  printf("%d:",n);                                              
  for (int i=2; i*i<=x; i++) {                                  
    while (n%i==0) {                                            
      printf(" %d",i);                                          
      n/=i;                                                     
    }                                                           
  }                                                             
  if (n!=1) {                                                   
    printf(" %d",n);                                            
  }                                                             
  printf("\n");                                                 
  return 0;                                                     
}                                                               
                                                                
                                                            