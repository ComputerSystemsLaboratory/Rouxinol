#include <iostream>                                           
#include <vector>                                             
using namespace std;                                          
                                                              
int main() {                                                  
  int w, n;                                                   
  cin >> w >> n;                                              
  int a, b;                                                   
  char com;                                                   
  vector<int> r;                                              
  for (int i=0; i<=w; i++) {                                  
    r.push_back(i);                                           
  }                                                           
  for (int i=0; i<n; i++) {                                   
    cin >> a >> com >> b;                                     
    swap(r[a],r[b]);                                          
  }                                                           
  for (int i=1; i<=w; i++) {                                  
    cout << r[i] << endl;                                     
  }                                                           
  return 0;                                                   
}                                                             
                           