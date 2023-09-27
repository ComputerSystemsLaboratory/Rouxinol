#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
  string T, buf;
  cin >> T;
  transform(T.begin(), T.end(),T.begin(), ::toupper);
  int times = 0;
  while (cin >> buf) {
    if(buf == "END_OF_TEXT") break;
    else{
      transform(buf.begin(), buf.end(), buf.begin(), ::toupper);
      if(buf == T) times++;
    }
  }
  cout << times << endl;
}