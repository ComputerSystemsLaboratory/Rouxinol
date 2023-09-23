#include <iostream>                                                                     
#include <cctype>                                                                       
                                                                                        
using namespace std;                                                                    
                                                                                        
int main(void) {                                                                        
  char buf;                                                                             
                                                                                        
  while (true) {                                                                        
    cin.get(buf);                                                                       
    if (buf == '\n') {                                                                  
      break;                                                                            
    }                                                                                   
                                                                                        
    if(islower(buf)) {                                                                  
      cout << (char)toupper(buf) << flush;                                              
                                                                                        
    }else if(isupper(buf)) {                                                            
      cout << (char)tolower(buf) << flush;                                              
                                                                                        
    } else cout << buf;                                                                 
  }                                                                                     
  cout << endl;                                                                         
}                                                                                       
                                                                                        
                                