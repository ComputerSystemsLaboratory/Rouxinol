#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
  int count=0;
  string needle = "";
  string word = "";
  cin>>needle;
  while(cin>>word , word != "END_OF_TEXT"){
    for(int i=0;i<(int)word.size();i++)
      word[i] = tolower(word[i]);
    if(word == needle) count++;
  }
  cout<<count<<endl;
  return 0;
}