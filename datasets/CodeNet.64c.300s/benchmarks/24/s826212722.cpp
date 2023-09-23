#include <iostream>                                                  
using namespace std;                                                 
                                                                     
int main() {                                                         
  while (true) {                                                     
    int n;                                                           
    cin >> n;                                                        
    if (n==0) {                                                      
      break;                                                         
    }                                                                
    int A, B;                                                        
    int Ascore = 0, Bscore = 0;                                      
    for (int i=0; i<n; i++) {                                        
      cin >> A >> B;                                                 
      if (A>B) {                                                     
        Ascore += (A+B);                                             
      } else if (B>A) {                                              
        Bscore += (A+B);                                             
      } else {                                                       
        Ascore += A;                                                 
        Bscore += B;                                                 
      }                                                              
    }                                                                
    cout << Ascore << " " << Bscore << endl;                         
  }                                                                  
  return 0;                                                          
}                          