#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main(void) {
  string W, T;
  string item;
  string t;
  int cnt = 0;
  cin >> W;
  cin.ignore();
  while(getline(cin, T) && T != "END_OF_TEXT") {
    transform(T.begin(), T.end(), T.begin(), ::tolower);
    stringstream ss(T);
    while(getline(ss, item, ' '))
      if(item == W)
        cnt++;
  }
  cout << cnt << endl;
  return 0;
}