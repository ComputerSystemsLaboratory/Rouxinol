#include <iostream>                                             
using namespace std;                                            
                                                                
int main(void) {                                                
  char ch;                                                      
  int count[26]={};                                             
  while (cin >> ch) {                                           
    if (islower(ch)) {                                          
      int num = ch-'a';                                         
      count[num]++;                                             
    } else if (isupper(ch)) {                                   
      int num = ch-'A';                                         
      count[num]++;                                             
    }                                                           
  }                                                             
  for (int i=0; i<26; i++) {                                    
    cout << char(i+'a') << " : " << count[i] << endl;           
  }                                                             
  return 0;                                                     
}                                                               
                                  