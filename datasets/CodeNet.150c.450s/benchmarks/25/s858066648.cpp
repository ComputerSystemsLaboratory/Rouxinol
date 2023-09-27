#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  string str;
  int num[26] = {0};

  char ch;
  while(cin >> ch){
    
    if(islower(ch)){
      num[ch-'a'] ++;
    }else if(isupper(ch)){
      num[ch-'A'] ++;
    }
  }

  for(int i=0; i<26; i++){
    char c='a'+i;
    cout << c << " : " << num[i] << endl;
  }
  
  return(0);

}