#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  string s, p;

  getline(cin, s);
  getline(cin, p);
  
  bool judge;
  for(int j=0; j<s.size(); j++){
    if(p[0] == s[j]){
      judge = true;
      int s_index;
      for(int k=1; k<p.size(); k++){
        s_index = j+k;
        if(s_index >= s.size()){
          s_index -= s.size();
        }
        
        if(p[k] != s[s_index]){
          judge = false;
          break;
        }
      }
    }else{
      judge = false;
    }
    
    if(judge){
      break;
    }
  }

  if(judge){
    cout << "Yes" << endl;
  }else{
    cout << "No" <<endl;
  }
  
  return(0);

}