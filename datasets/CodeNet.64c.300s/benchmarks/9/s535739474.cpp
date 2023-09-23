#include <iostream>                                             
using namespace std;                                            
                                                                
int main() {                                                    
  int n;                                                        
  cin >> n;                                                     
  int debt = 100000;                                            
  double interest = 1.05;                                       
  for (int i=1; i<=n; i++) {                                    
    debt *= interest;                                           
    if (debt%1000!=0) {                                         
      debt += 1000-(debt%1000);                                 
    }                                                           
  }                                                             
  cout << debt << endl;                                         
  return 0;                                                     
}                                                               
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
     