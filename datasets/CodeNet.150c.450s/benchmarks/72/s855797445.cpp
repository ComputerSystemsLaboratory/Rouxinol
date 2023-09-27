#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main(){
  char c;
  string str;
  int len;

  getline(cin, str);
  len=str.length();
  //cout<<len;
  for(int i=0; i<len; i++){
    if(islower(str[i])){
      str[i]=toupper(str[i]);
      cout<<str[i];
    }else if(isupper(str[i])){
      str[i]=tolower(str[i]);
      cout<<str[i];
    }else{
      cout<<str[i];
    }
  }
  cout<<endl;

  return 0;

}