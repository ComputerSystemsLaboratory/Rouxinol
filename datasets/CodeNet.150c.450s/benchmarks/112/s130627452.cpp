#include <iostream>                                             
#include <vector>                                               
using namespace std;                                            
                                                                
int main() {                                                    
  int n, m;                                                     
  while (true) {                                                
    cin >> n;                                                   
    if (n==0) {                                                 
      break;                                                    
    }                                                           
    vector<char> from(n);                                       
    vector<char> to(n);                                         
    for (int i=0; i<n; i++) {                                   
      cin >> from[i] >> to[i];                                  
    }                                                           
    cin >> m;                                                   
    vector<char> v(m);                                          
    for (int i=0; i<m; i++) {                                   
      cin >> v[i];                                              
      for (int j=0; j<n; j++) {                                 
        if (v[i]==from[j]) {                                    
          v[i] = to[j];                                         
          break;                                                
        }                                                       
      }                                                         
    }                                                           
    for (int i=0; i<m; i++) {                                   
      cout << v[i];                                             
    }                                                           
    cout << endl;                                               
  }                                                             
  return 0;                                                     
}                                    