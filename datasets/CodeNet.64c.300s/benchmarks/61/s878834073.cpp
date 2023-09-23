#include <iostream>                                             
#include <cstring>                                              
using namespace std;                                            
                                                                
int main() {                                                    
  int r, c;                                                     
  cin >> r >> c;                                                
  int rc[r+1][c+1];                                             
  memset(rc,0,sizeof(rc));                                      
  for (int i=0; i<r; i++) {                                     
    for (int j=0; j<c; j++) {                                   
      cin >> rc[i][j];                                          
    }                                                           
  }                                                             
  for (int i=0; i<r; i++) {                                     
    for (int j=0; j<c; j++) {                                   
      rc[i][c] += rc[i][j];                                     
      rc[r][j] += rc[i][j];                                     
    }                                                           
    rc[r][c] += rc[i][c];                                       
  }                                                             
  for (int i=0; i<r+1; i++) {                                   
    for (int j=0; j<c+1; j++) {                                 
      cout << ((i>=0 && j==0)?"":" ") << rc[i][j] << flush;     
    }                                                           
    cout << endl;                                               
  }                                                             
  return 0;                                                     
}                                                               
                             