#include <iostream>                                        
using namespace std;                                       
                                                           
int main(void) {                                           
  int n, m;                                                
  cin >> n >> m;                                           
  int C[m], T[n+1];                                        
  for (int i=0; i<m; i++) {                                
    cin >> C[i];                                           
    for (int j=0; j<n+1; j++) {                            
      T[j]=10001;                                          
      T[0]=0;                                              
    }                                                      
  }                                                        
  for (int i=0; i<m; i++) {                                
    for (int j=C[i]; j<=n; j++) {                          
      T[j]=min(T[j],T[j-C[i]]+1);                          
    }                                                      
  }                                                        
  cout << T[n] << endl;                                    
}                                                          
                                                           
                           