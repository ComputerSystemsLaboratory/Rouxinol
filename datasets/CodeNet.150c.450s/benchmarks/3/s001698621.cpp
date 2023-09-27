#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string S;
  cin >> S;
  int q;
  cin >> q;
  for (auto i=0; i<q; i++) {
    string M;
    cin >> M;
    int a, b;
    cin >> a >> b;
    if (M == "print") {
      cout << S.substr(a, b-a+1) << endl;
    } else if (M == "reverse") {
      reverse(S.begin()+a, S.begin()+b+1);
    } else {
      string p;
      cin >> p;
      for (auto i=0; i<p.size(); i++) {
	S[a+i] = p[i]; 
      }
    }
  }
  return 0;
}