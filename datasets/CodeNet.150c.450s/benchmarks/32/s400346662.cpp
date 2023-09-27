#include<iostream>                                                 
#include<vector>                                                   
using namespace std;                                               
                                                                   
int main(void) {                                                   
  while (true) {                                                   
    int m, n_min, n_max;                                           
    cin >> m >> n_min >> n_max;                                    
    if (m==0) {                                                    
      break;                                                       
    }                                                              
    vector<int> P;                                                 
    for (int i=0; i<m; i++) {                                      
      int x;                                                       
      cin >> x;                                                    
      P.push_back(x);                                              
    }                                                              
    int gap=0;                                                     
    int gapi=0;                                                    
    for (int i=n_min-1; i<n_max; i++) {                            
      if (P[i]-P[i+1]>=gap) {                                      
        gap = P[i]-P[i+1];                                         
        gapi = i+1;                                                
      }                                                            
    }                                                              
    cout << gapi << endl;                                          
  }                                                                
  return 0;                                                        
}                             