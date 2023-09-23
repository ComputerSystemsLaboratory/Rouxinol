#include <iostream>                                                       
                                                                          
using namespace std;                                                      
                                                                          
void judgment(int,int,int);                                               
                                                                          
int main (void) {                                                         
  int a, b, c;                                                            
  cin >> a >> b >> c;                                                     
  judgment(a,b,c);                                                        
}                                                                         
                                                                          
void judgment(int x,int y,int z) {                                        
  if (x < y && y < z) {                                                   
    cout << "Yes" << endl;                                                
  } else {                                                                
    cout << "No" << endl;                                                 
  }                                                                       
}                                                                         
                                                                          
                                                                          
                                    