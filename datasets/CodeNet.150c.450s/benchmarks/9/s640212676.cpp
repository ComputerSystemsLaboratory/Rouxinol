#include <iostream>                                             
#include <string>                                               
using namespace std;                                            
                                                                
int main() {                                                    
  string str;                                                   
  int m;                                                        
  while (true) {                                                
    cin >> str;                                                 
    if (str=="-") {                                             
      break;                                                    
    }                                                           
    cin >> m;                                                   
    string x, y;                                                
    for (int i=0; i<m; i++) {                                   
      int h;                                                    
      cin >> h;                                                 
      x = str.substr(0,h);                                      
      y = str.substr(h);                                        
      str = y+x;                                                
    }                                                           
    cout << str << endl;                                        
  }                                                             
  return 0;                                                     
}                                                               
                                                                
                                                                
                                                                
                    