#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  int shuffle_num;
  
  while(1){
    string T;
    cin >> T;
    if(T[0] == '-'){
      break;
    }
    
    cin >> shuffle_num;

    string buf = T;
    int h;
    for(int i=0; i<shuffle_num; i++){
      cin >> h;
      for(int j=0; j<h; j++){
        buf[buf.size()-h+j] = T[j];
      }
      for(int j=h; j<T.size(); j++){
        buf[j-h] = T[j];
      }
      T = buf;
      
    }

    cout << T << endl;
  }
  
  return(0);

}