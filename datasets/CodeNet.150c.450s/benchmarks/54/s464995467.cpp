#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  int cnt = 0;
  string W, word;

  cin >> W;
  while(cin >> word){
    if(word == "END_OF_TEXT") break;
    for (int i = 0; i < word.size(); i++) {
      word[i] = tolower(word[i]);
    }
    if(word == W) cnt++;
  }
  cout << cnt << endl;
  return 0;
}