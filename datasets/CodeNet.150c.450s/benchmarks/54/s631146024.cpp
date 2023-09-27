#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  string word, sentence;
  cin >> word;
  int count = 0;
  transform(word.begin(), word.end(), word.begin(), ::tolower);

  while (cin >> sentence) {
    if (sentence == "END_OF_TEXT") {
      break;
    }
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    if (sentence == word) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}