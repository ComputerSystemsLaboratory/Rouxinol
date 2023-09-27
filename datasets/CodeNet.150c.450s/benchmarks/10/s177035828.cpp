#include <iostream>                                                                                       
#include <cstring>                                                                                        
                                                                                                          
using namespace std;                                                                                      
                                                                                                          
int main (void) {                                                                                         
  int house[4][3][10];                                                                                    
  memset(house,0,sizeof(house));                                                                          
  int n;                                                                                                  
  cin >> n;                                                                                               
  for(int i = 0; i < n; i++){                                                                             
    int p, q, r, s;                                                                                       
    cin >> p >> q >> r >> s;                                                                              
    house[p-1][q-1][r-1] += s;                                                                            
  }                                                                                                       
                                                                                                          
  for(int p = 0; p < 4; p++){                                                                             
    for(int q = 0; q < 3; q++){                                                                           
      for(int r = 0; r < 10; r++){                                                                        
        cout << ' ' << house[p][q][r] << flush;                                                           
      }                                                                                                   
      cout << endl;                                                                                       
    }                                                                                                     
    if(p == 3){                                                                                           
      break;                                                                                              
    }                                                                                                     
    for (int i=0; i<20; i++) {                                                                            
      cout << "#" << flush;                                                                               
    }                                                                                                     
    cout << endl;                                                                                         
  }                                                                                                       
}                                                                                                         
                                                     