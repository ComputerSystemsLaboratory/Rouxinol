#include <iostream>                                                                
using namespace std;                                                               
                                                                                   
int main(void) {                                                                   
  int n;                                                                           
  cin >> n;                                                                        
  for (int i=1; i<=n; i++) {                                                       
    if (i%3==0) {                                                                  
      cout << " " << i << flush;                                                   
      continue;                                                                    
    }                                                                              
      int x = i;                                                                   
      while (x!=0) {                                                               
        if (x%10==3) {                                                             
          cout << " " << i << flush;                                               
          break;                                                                   
        }                                                                          
        x /= 10;                                                                   
      }                                                                            
    }                                                                              
  cout << endl;                                                                    
  return 0;                                                                        
}                                                                                  
                                       