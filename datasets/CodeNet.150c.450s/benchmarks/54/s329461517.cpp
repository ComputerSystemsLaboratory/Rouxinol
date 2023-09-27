#include<iostream>
#include <string>
using namespace std;

int main(){
  string searchWord, word;
  int count = 0;

  cin >> searchWord;

  for(int i = 0; i < 9; i++){
    if(searchWord[i] == '\0') break;
    searchWord[i] = tolower(searchWord[i]);
  }

  while(cin >> word){
    if(word == "END_OF_TEXT") break;
    for(int i = 0; i < 9; i++){
      if(word[i] == '\0') break;
      word[i] = tolower(word[i]);
    }

    if(word == searchWord) count++;
  }

  cout << count << endl;
  return 0;
}