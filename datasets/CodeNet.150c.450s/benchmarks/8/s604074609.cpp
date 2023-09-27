#include <iostream>                                             
#include <string>                                               
using namespace std;                                            
                                                                
int main(void) {                                                
  int n;                                                        
  cin >> n;                                                     
  string t_cards, h_cards;                                      
  int t_point = 0;                                              
  int h_point = 0;                                              
  for (int i=0; i<n; i++) {                                     
    cin >> t_cards >> h_cards;                                  
    if (t_cards > h_cards) {                                    
      t_point += 3;                                             
    } else if (t_cards< h_cards) {                              
      h_point += 3;                                             
    } else {                                                    
      t_point += 1;                                             
      h_point += 1;                                             
    }                                                           
  }                                                             
  cout << t_point << " " << h_point << endl;                    
                                                                
  return 0;                                                     
}                                                               
                                                                
                                                                
                                                                
                                                                
                                  