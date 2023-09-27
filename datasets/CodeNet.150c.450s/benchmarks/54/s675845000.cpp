#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  string find_word;
  cin>>find_word;
  for(char &c: find_word) c=toupper(c);

  string word;
  int num = 0;
  while(cin>>word){
    if(word=="END_OF_TEXT") break;
    for(char &c: word) c=toupper(c);
    if(word==find_word) num++;
  }
  cout<<num<<endl;
  return 0;
}