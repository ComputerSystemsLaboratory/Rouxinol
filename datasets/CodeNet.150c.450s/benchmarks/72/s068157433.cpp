#include <iostream>                                                  
#include <cstdio>                                                                                                        
using namespace std;                                                 
                                                                     
int main() {                                                         
  char ch;                                                           
  while (true) {                                                     
    scanf("%c", &ch);                                                
    if (islower(ch)) {                                               
      ch = toupper(ch);                                              
    } else if (isupper(ch)) {                                        
      ch = tolower(ch);                                              
    }                                                                
    cout << ch << flush;                                             
    if (ch=='\n') {                                                  
      break;                                                         
    }                                                                
  }                                                                  
  return 0;                                                          
}                                                                    
                             