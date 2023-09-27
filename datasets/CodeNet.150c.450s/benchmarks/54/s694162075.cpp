#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdio>

using namespace std;

struct tolow {
  int operator()(int word) {
    return tolower(word);
  }
};

int main(){
  string w,t;
  cin >> w >> t;
  int n=0;
  std::transform(w.begin(), w.end(), w.begin(), tolow());
  while (t!= "END_OF_TEXT") {
    std::transform(t.begin(), t.end(), t.begin(), tolow());
    if (w == t) n+=1;
    cin >> t;
  }
  cout << n << endl;
}

