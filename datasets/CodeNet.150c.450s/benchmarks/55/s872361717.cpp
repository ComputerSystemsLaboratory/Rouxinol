#include <iostream>                                  
#include <cstring>                                   
#include <cstdio>                                  
                                                     
using namespace std;                                 
                                                     
int main (void) {                                    
  char ch[1000];                                     
                                                     
  while (true) {                                     
    scanf("%s", ch);                                 
    if (strcmp(ch,"0")==0) {                         
      break;                                         
    }                                                
    int ans = 0;                                     
    for (int i=0; i<1000; i++) {                     
      if (ch[i]=='\0') {                             
        break;                                       
      }                                              
      ans += ch[i]-'0';                              
    }                                                
    cout << ans << endl;                             
  }                                                  
}                                                    
                             