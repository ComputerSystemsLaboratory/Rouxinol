#include <bits/stdc++.h>                                             
using namespace std;                                                 
                                                                     
int main(void){                                                      
  int x, y, s;                                                       
  while(cin >> x >> y >> s, x | y | s){                              
    int ans = 0;                                                     
    for(int i=1; i < s; i++){                                        
      for(int j=i; j < s; j++){                                      
        if(int(i * (100+x)/100) + int(j * (100+x)/100) == s)         
          ans = max(ans, int(i * (100+y)/100 + j * (100+y)/100));    
        if(int(i * (100+x)/100) + int(j * (100+x)/100) > s)          
          break;                                                     
      }                                                              
    }                                                                
    cout << ans << endl;                                             
  }                                                                  
  return 0;                                                          
}                                                                    