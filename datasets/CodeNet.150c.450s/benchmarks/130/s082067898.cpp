#include <iostream>                                             
#include <vector>                                               
using namespace std;                                            
                                                                
int main(void) {                                                
  int n, m;                                                     
  cin >> n >> m;                                                
  vector< vector<int> > a(n,vector<int>(m));                    
  for (int i=0; i<n; i++) {                                     
    for (int j=0; j<m; j++) {                                   
      cin >> a[i][j];                                           
    }                                                           
  }                                                             
  vector<int> b(m);                                             
  for (int i=0; i<m; i++) {                                     
    cin >> b[i];                                                
  }                                                             
  vector<int> c(n,0);                                           
  for (int i=0; i<n; i++) {                                     
    for (int j=0; j<m; j++) {                                   
      c[i] += a[i][j]*b[j];                                     
    }                                                           
  }                                                             
  for (int i=0; i<n; i++) {                                     
    cout << c[i] << endl;                                       
  }                                                             
  return 0;                                                     
}                                                               
                                  