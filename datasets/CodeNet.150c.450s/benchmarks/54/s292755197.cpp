#include <iostream>                                                                              
#include <string>                                                                                
using namespace std;                                                                             
                                                                                                 
int main (void) {                                                                                
  string T, W;                                                                                   
  int i, ans = 0;                                                                                
  cin >> T;                                                                                      
  while (true) {                                                                                 
    cin >> W;                                                                                    
    if (W=="END_OF_TEXT") {                                                                      
      break;                                                                                     
    }                                                                                            
    for (i=0; i<W.length(); i++) {                                                               
      W[i] = tolower(W[i]);                                                                      
    }                                                                                            
    if (W==T) {                                                                                  
      ans++;                                                                                     
    }                                                                                            
  }                                                                                              
  cout << ans << endl;                                                                           
}                                                                                                
                                              