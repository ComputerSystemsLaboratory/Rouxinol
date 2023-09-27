//:58~
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
  map<string,int> words;
  int l_max=0, f_max=0;
  string longest, frequent;

  string word;
  while(cin >> word){
    words[word]++;
    if(word.size()>l_max){
      l_max=word.size();
      longest=word;
    }
    if(words[word]>f_max){
      f_max=words[word];
      frequent=word;
    }
  }
  cout << frequent << ' ' << longest << endl;

  return 0;
}