#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;

int main(){
  string str,word;
  int x=0,l,i;

  cin >> word; //みつけたい文字の入力

  /*テキストの入力*/
  while( cin >> str){
    
    if( str == "END_OF_TEXT")break;//終了
    l = str.size();
    for(i = 0 ; i < l;i++){
    str[i] = tolower(str[i]);
    }
    if( str == word )x++;    
  }

  cout << x << endl;
  return 0;
}