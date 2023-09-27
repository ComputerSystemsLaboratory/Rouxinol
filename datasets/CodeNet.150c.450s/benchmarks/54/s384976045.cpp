// 1_9_A
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
  int count = 0;
  string W, text;
  cin >> W;
  transform(W.begin(), W.end(), W.begin(), ::tolower);
  while(cin >> text){
    if(text == "END_OF_TEXT"){
      cout << count << endl;
      return 0;
    }
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    if(W == text) count++;
  }
}

