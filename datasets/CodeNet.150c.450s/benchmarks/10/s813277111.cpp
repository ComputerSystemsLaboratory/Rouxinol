#include <iostream>                                             
#include <cstring>                                              
using namespace std;                                            
                                                                
int main(void) {                                                
  int house[4][3][10];                                          
  memset(house,0,sizeof(house));                                
  int n;                                                        
  cin >> n;                                                     
  int b, f, r, v;                                               
  while (n--) {                                                 
    cin >> b >> f >> r >> v;                                    
    house[b-1][f-1][r-1] += v;                                  
  }                                                             
  for (int i=0; i<4; i++) {                                     
    for (int j=0; j<3; j++) {                                   
      for (int k=0; k<10; k++) {                                
        cout << " " << house[i][j][k] << flush;                 
      }                                                         
      cout << endl;                                             
    }                                                           
    if (i==3) {                                                 
      break;                                                    
    }                                                           
    for (int i=0; i<20; i++) {                                  
      cout << "#" << flush;                                     
    }                                                           
    cout << endl;                                               
  }                                                             
  return 0;                                                     
}                                                               
                                                                
                                                                
                                 