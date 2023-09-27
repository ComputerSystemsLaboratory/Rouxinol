// ITP1_9_A

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
  string W;
  cin >> W;
  transform(W.begin(), W.end(), W.begin(), ::toupper);
  int count = 0;
  while (true) {
    string T;
    cin >> T;
    if (T == "END_OF_TEXT")
      break;
    else {
      transform(T.begin(), T.end(), T.begin(), ::toupper);
      if (T == W)
        count++;
    }
  }
  cout << count << endl;
}

