#include <iostream>
#include <vector>                                                                      
                                                                                        
using namespace std;                                                                    
                                                                                        
int main(void) {                                                                        
  int r, c;                                                                             
  cin >> r >> c;                                                                        
  vector<vector<int> > v(r+1,vector<int>(c+1,0));                                       
  for (int i=0; i<r; i++) {                                                             
    for(int j=0; j<c; j++) {                                                            
      cin >> v[i][j];                                                                   
      v[i][c]+=v[i][j];                                                                 
    }                                                                                   
  }                                                                                     
                                                                                        
  for(int j=0;j<c+1;j++){                                                               
    for(int i=0;i<r;i++){                                                               
      v[r][j]+=v[i][j];                                                                 
    }                                                                                   
  }                                                                                     
                                                                                        
  for (int i=0; i<r+1; i++) {                                                           
    for (int j=0; j<c+1; j++) {                                                         
      if (j != 0) {                                                                     
        cout << " " << flush;                                                           
      }                                                                                 
      cout << v[i][j] << flush;                                                         
    }                                                                                   
    cout << endl;                                                                       
  }                                                                                     
}                                          