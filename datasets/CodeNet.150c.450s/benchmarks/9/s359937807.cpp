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
    int h;
    for(int i=0; i<shuffle_num; i++){
      cin >> h;

      string right = T.substr(0, h);
      string left = T.substr(h, T.size());

      T = left + right;
      
    }
    cout << T << endl;
  }
  
  return(0);

}