#include<iostream>
#include<string>
using namespace std;

int main() {
  string w;
  cin >> w;

  string text;
  int cnt = 0;
  for (;;) {
    cin >> text;
    
    if (text == "END_OF_TEXT") break;
    
    for (int i = 0; i < text.size(); i++) {
      text[i] = tolower(text[i]);
    }

    if (text == w) cnt++;
    
  }

  cout << cnt << endl;
  
  return 0;
}
