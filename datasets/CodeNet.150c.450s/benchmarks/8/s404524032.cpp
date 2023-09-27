#include <iostream>                                             
#include <string>                                               
using namespace std;                                            
                                                                
int main() {                                                    
  int n;                                                        
  cin >> n;                                                     
  string Tcard, Hcard;                                          
  int Tpoint = 0, Hpoint = 0;                                   
  while (n--) {                                                 
    cin >> Tcard >> Hcard;                                      
    if (Tcard>Hcard) {                                          
      Tpoint += 3;                                              
    } else if (Tcard<Hcard) {                                   
      Hpoint += 3;                                              
    } else {                                                    
      Tpoint++;                                                 
      Hpoint++;                                                 
    }                                                           
  }                                                             
  cout << Tpoint << " " << Hpoint << endl;                      
  return 0;                                                     
}                                                               
                                                                
                                                                
                                                                
                                                                
                                   