#include <iostream>                                                       
                                                                          
using namespace std;                                                      
                                                                          
void judgment(int x,int y);                                               
                                                                          
int main (void) {                                                         
  int a, b;                                                               
  cin >> a >> b;                                                          
  judgment(a,b);                                                          
}                                                                         
                                                                          
void judgment(int x, int y) {                                             
  if (x < y) {                                                            
    cout << "a < b" << endl;                                              
  } else if (x > y) {                                                     
    cout << "a > b" << endl;                                              
  } else {                                                                
    cout << "a == b" << endl;                                             
  }                                                                       
                                                                          
}                                                                         
                                      