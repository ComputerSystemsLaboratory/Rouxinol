#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

int main()
{
  char ch;
  while(true){
    scanf("%c",&ch); //scanfは' 'も読み取る
    if(ch=='\n') break;
    if(islower(ch)!=0){ //小文字ならばtrue
      ch=toupper(ch); //小文字→ 大文字
      cout << ch;
    }else if(isupper(ch)!=0){ //大文字ならばtrue
      ch=tolower(ch); //大文字→ 小文字
      cout << ch;
    }else{
      cout << ch;
    }
  }
  cout << endl;
  return 0;
}