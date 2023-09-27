#include<iostream>                                        
#include<string>                                          
using namespace std;                                      
                                                          
int main(){                                               
  string word1;                                           
  cin >> word1;                                           
  string word2;                                           
  int cnt = 0;                                            
                                                          
  for(int i=0;i<word1.size();i++){                        
    word1[i] = tolower(word1[i]);                         
  }                                                       
                                                          
  while(1){                                               
    cin >> word2;                                         
    if(word2 == "END_OF_TEXT") break;                     
    for(int i=0;i<word2.size();i++){                      
      word2[i] = tolower(word2[i]);                       
    }                                                     
    if(word1 == word2) cnt++;                             
  }                                                       
                                                          
  cout << cnt<< endl;                                     
                                                          
  return 0;                                               
} 