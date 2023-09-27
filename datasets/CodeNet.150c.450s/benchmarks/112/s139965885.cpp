#include <iostream>                                                  
#include <cstring>                                                   
using namespace std;                                                 
char c[128];                                                         
                                                                     
int main() {                                                         
  while(true){                                                       
    int n;                                                           
    cin >> n;                                                        
    if (n==0) {                                                      
      break;                                                         
    }                                                                
    memset(c,0,sizeof(c));                                           
    for(int i=0;i<n;i++){                                            
      char a, b;                                                     
      cin >> a >> b;                                                 
      c[a] = b;                                                      
    }                                                                
    int m;                                                           
    cin >> m;                                                        
    for (int i=0; i<m; i++) {                                        
      char a;                                                        
      cin >> a;                                                      
      if (c[a]) {                                                    
        cout << c[a] << flush;                                       
      } else {                                                       
        cout << a << flush;                                          
      }                                                              
    }                                                                
    cout << endl;                                                    
  }                                                                  
  return 0;                                                          
}                                                                    
                                                                     
                         