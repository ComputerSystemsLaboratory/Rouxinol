#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main(){
  string str;

  getline(cin, str);
  for( auto &i : str){
    if(isupper(i) ){
      i = tolower(i);
    }else{
      i = toupper(i);
    }
  }
  cout << str << endl;
}