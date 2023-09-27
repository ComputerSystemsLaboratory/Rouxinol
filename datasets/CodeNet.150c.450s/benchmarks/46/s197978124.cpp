#include <iostream>                                                                     
#include <bits/stdc++.h>                                                                
                                                                                        
using namespace std;                                                                    
                                                                                        
int main (void) {                                                                       
  while (true) {                                                                        
    int n, x;                                                                           
    fscanf(stdin, "%d %d", &n, &x);                                                     
    if (n==0 && x==0) {                                                                 
      break;                                                                            
    }                                                                                   
    int ans = 0;                                                                        
    for (int i=1; i<=n; i++) {                                                          
      for (int j=i+1; j<=n; j++) {                                                      
        int k = x-i-j;                                                                  
        if (k>i && k>j && k<=n) {                                                       
          ans++;                                                                        
        }                                                                               
      }                                                                                 
    }                                                                                   
    fprintf(stdout, "%d\n", ans);                                                       
  }                                                                                     
}                                                                                       
                                                                                        
                                                