#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <complex>
using namespace std;

int main() {
  string w;
  cin >> w;
  transform(w.begin(), w.end(), w.begin(), ::tolower);

  int c = 0;
  for(;;){
    string t;
    cin >> t;
    if(t == "END_OF_TEXT"){
      cout << c << endl;
      return 0;
    }
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    if(t == w){
      c++;
    }
  }
}
