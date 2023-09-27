#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
  string str, word;
  int sum = 0;
  cin >> word;
  for(int i=0;i<(int)word.size();i++){
    word[i] = toupper(word[i]);
  }
  while(1){
    cin >> str;
    if(str.find("END_OF_TEXT") != string::npos)break;
    for(int i=0;i<(int)str.size();i++){
      str[i] = toupper(str[i]);
    }
    if(str == word){
      sum++;
    }
  }
  cout << sum << endl;
  return 0;
}