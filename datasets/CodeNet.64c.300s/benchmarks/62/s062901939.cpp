#include <iostream>                                                             
#include <cstring>                                                              
                                                                                
using namespace std;                                                            
                                                                                
int main (void) {                                                               
  int n, m;                                                                     
  cin >> n >> m;                                                                
  int a[n][m];                                                                  
  for (int i=0; i<n; i++) {                                                     
    for (int j=0; j<m; j++) {                                                   
      cin >> a[i][j];                                                           
    }                                                                           
  }                                                                             
  int b[m];                                                                     
  for (int i=0; i<m; i++) {                                                     
    cin >> b[i];                                                                
  }                                                                             
  int c[n];                                                                     
  memset(c,0,sizeof(c));                                                        
  for (int i=0; i<n; i++) {                                                     
    for (int j=0; j<m; j++) {                                                   
        c[i] += a[i][j]*b[j];                                                   
      }                                                                         
    }                                                                           
                                                                                
  for (int i=0; i<n; i++) {                                                     
    cout << c[i] << endl;                                                       
  }                                                                             
}                                             