#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
  int q, a, b;
  string str, ope, word, sub_word;

  cin >> str;
  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> ope;
    if (ope == "print") {
      cin >> a >> b;
      cout << str.substr(a, b - a + 1) << endl;
    }
    else if (ope == "reverse") {
      cin >> a >> b;
      sub_word = str.substr(a, b - a + 1);
      for (int j = 0; j < sub_word.size(); j++) {
        str[j+a] = sub_word[sub_word.size() - j - 1];
      }
    }
    else if (ope == "replace") {
      cin >> a >> b >> word;
      str = str.replace(a, b - a + 1, word);
    }
  }

  return 0;
}
