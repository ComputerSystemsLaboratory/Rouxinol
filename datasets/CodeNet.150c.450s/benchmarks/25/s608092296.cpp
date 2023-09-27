#include <iostream>
#include <string>
using namespace std;

int main(void){

  string str;
  char ch = 'a';
  int charaarray[26] = {};

  while(getline(cin,str)){
    for ( int i = 0 ; str[i] != '\0' ; i++){

      if ( (str[i] >= 'a') && (str[i] <= 'z')){
        charaarray[str[i] - 'a']++;
      }else if ( (str[i] >= 'A') && (str[i] <= 'Z')){
        charaarray[str[i] - 'A']++;
      }
    }
  }

  for (int i = 0 ; i < 26 ; i++){
    cout << ch++ << " : " << charaarray[i] << endl;
  }  
}