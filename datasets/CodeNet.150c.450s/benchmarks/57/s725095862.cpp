#include <iostream>                                                             
                                                                                
using namespace std;                                                            
                                                                                
int main (void) {                                                               
  int a, b;                                                                     
  char op;                                                                      
  while (true) {                                                                
    cin >> a >> op >> b;                                                        
    if (op=='?') {                                                              
      break;                                                                    
    }                                                                           
    int ans;                                                                    
    switch (op) {                                                               
    case '+':                                                                   
      ans = a+b;                                                                
      break;                                                                    
    case '-':                                                                   
      ans = a-b;                                                                
      break;                                                                    
    case '*':                                                                   
      ans = a*b;                                                                
      break;                                                                    
    case '/':                                                                   
      ans = a/b;                                                                
      break;                                                                    
    default:                                                                    
      break;                                                                    
    }                                                                           
    cout << ans << endl;                                                        
  }                                                                             
}                                    