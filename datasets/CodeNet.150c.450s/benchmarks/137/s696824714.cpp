#include<iostream>                                                                                                                
#include<cstdio>                                                                                                                  
#include<string>                                                                                                                  
#include<set>                                                                                                                     
using namespace std;                                                                                                              
int main(void) {                                                                                                                  
  int n;                                                                                                                          
  string query, word;                                                                                                             
  set<string> dict;                                                                                                               
  cin >> n;                                                                                                                       
  while (n--) {                                                                                                                   
    cin >> query >> word;                                                                                                         
    if (query=="insert") {                                                                                                        
      dict.insert(word);                                                                                                          
    } else {                                                                                                                      
      if (dict.find(word)==dict.end()) {                                                                                          
        puts("no");                                                                                                               
      } else {                                                                                                                    
        puts("yes");                                                                                                              
      }                                                                                                                           
    }                                                                                                                             
  }                                                                                                                               
}                                                                                                                                 
                     