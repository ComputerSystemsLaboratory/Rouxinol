#include <iostream>                                             
#include <cstring>                                              
using namespace std;                                            
                                                                
int main(void) {                                                
  int r, c;                                                     
  cin >> r >> c;                                                
  int a[r+1][c+1];                                              
  memset(a,0,sizeof(a));                                        
  for (int i=0; i<r; i++) {                                     
    for (int j=0; j<c; j++) {                                   
      cin >> a[i][j];                                           
      a[r][j] += a[i][j];                                       
      a[i][c] += a[i][j];                                       
      a[r][c] += a[i][j];                                       
    }                                                           
  }                                                             
  for (int i=0; i<r+1; i++) {                                   
    for (int j=0; j<c+1; j++) {                                 
      if (j) {                                                  
        cout << " " << flush;                                   
      }                                                         
      cout << a[i][j] << flush;                                 
    }                                                           
    cout << endl;                                               
  }                                                             
  return 0;                                                     
}                           