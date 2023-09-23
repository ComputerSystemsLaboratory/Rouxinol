#include <iostream>                                                                     
                                                                                        
using namespace std;                                                                    
                                                                                        
int main (void) {                                                                       
  int m, f, r;                                                                          
  while (true) {                                                                        
    cin >> m >> f >> r;                                                                 
    int x = m+f;                                                                        
    char ans;                                                                           
    if (m+f+r==-3) {                                                                    
      break;                                                                            
    } else if(m==-1 || f==-1) {                                                         
      ans = 'F';                                                                        
    } else if (x>=80) {                                                                 
      ans = 'A';                                                                        
    } else if (x>=65) {                                                                 
      ans = 'B';                                                                        
    } else if (x>=50) {                                                                 
      ans = 'C';                                                                        
    } else if (x>=30) {                                                                 
      if (r>=50) {                                                                      
        ans = 'C';                                                                      
      } else {                                                                          
        ans = 'D';                                                                      
      }                                                                                 
    } else {                                                                            
      ans = 'F';                                                                        
    }                                                                                   
    cout << ans << endl;                                                                
  }                                                                                     
}                                                                                   