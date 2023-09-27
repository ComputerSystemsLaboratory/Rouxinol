#include <iostream>                                                  
#include <cstdio>                                                    
#include <cstring>                                                   
using namespace std;                                                 
                                                                     
int main() {                                                         
  int n, m, l;                                                       
  cin >> n >> m >> l;                                                
  int a[n][m], b[m][l];                                              
  long long c[n][l];                                                 
  memset(c,0,sizeof(c));                                             
  for (int i=0; i<n; i++) {                                          
    for (int j=0; j<m; j++) {                                        
      cin >> a[i][j];                                                
    }                                                                
  }                                                                  
  for (int i=0; i<m; i++) {                                          
    for (int j=0; j<l; j++) {                                        
      cin >> b[i][j];                                                
    }                                                                
  }                                                                  
  for (int i=0; i<n; i++) {                                          
    for (int j=0; j<l; j++) {                                        
      for (int k=0; k<m; k++) {                                      
        c[i][j] += a[i][k]*b[k][j];                                  
      }                                                              
    }                                                                
  }                                                                  
  for (int i=0; i<n; i++) {                                          
    for (int j=0; j<l; j++) {                                        
      cout << (i>=0 && j==0?"":" ") << c[i][j] << flush;             
    }                                                                
    printf("\n");                                                    
  }                                                                  
  return 0;                                                          
}               