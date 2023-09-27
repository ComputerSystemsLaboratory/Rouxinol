#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  string T, W;
  string E = "END_OF_TEXT";
  
  cin >> W;
  
  bool end_of_text=false;
  int count_W=0;
  
  while(1){
    cin >> T;

    if(T.size() == W.size()){
      for(int j=0; j<T.size(); j++){
        for(int k=0; k<W.size(); k++){
          if(W[k]-'a' != T[j+k]-'a' &&
             W[k]-'A' != T[j+k]-'a' &&
             W[k]-'a' != T[j+k]-'A' &&
             W[k]-'A' != T[j+k]-'A' ){
            break;
          }
        
          if(k == W.size()-1){
            count_W += 1;
          }
        }
      }
    }
    
    if(T.size() == E.size()){
      for(int k=0; k<E.size(); k++){
        if(E[k] != T[k]){
          break;
        }
        if(k == E.size()-1){
          end_of_text=true;
        }
      }
    }
    
    if(end_of_text){
      break;
    }
    
  }
  
  cout << count_W << endl;
  
  return(0);

}