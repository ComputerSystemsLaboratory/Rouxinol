#include <iostream>
#include <string>

using namespace std;

int main(){
  string t, w;
  int count = 0;
  bool flag = false;
  cin >> w;
  while (cin >> t) {
    if (t == "END_OF_TEXT") break;
    for (int i = 0; i < t.length(); i++)
      if (isupper(t[i])) t[i] = (char)(t[i]-'A'+'a');
    if (w == t) count++;
  }
  cout << count << endl;
  return 0;
}