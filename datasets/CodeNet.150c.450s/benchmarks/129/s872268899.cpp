#include <iostream>                                             
#include <vector>                                               
using namespace std;                                            
                                                                
int main(void) {                                                
  int r, c;                                                     
  cin >> r >> c;                                                
  vector< vector<int> > rc(r+1,vector<int>(c+1,0));             
  for (int i=0; i<r; i++) {                                     
    for (int j=0; j<c; j++) {                                   
      cin >> rc[i][j];                                          
    }                                                           
  }                                                             
  for (int i=0; i<r; i++) {                                     
    for (int j=0; j<c; j++) {                                   
      rc[i][c] += rc[i][j];                                     
    }                                                           
  }                                                             
  for (int j=0; j<c+1; j++) {                                   
    for (int i=0; i<r; i++) {                                   
      rc[r][j] += rc[i][j];                                     
    }                                                           
  }                                                             
  for (int i=0; i<r+1; i++) {                                   
    for (int j=0; j<c+1; j++) {                                 
      cout << rc[i][j] << flush;                                
      cout << (j-c?" ":"\n") << flush;                          
    }                                                           
  }                                                             
  return 0;                                                     
}                                  