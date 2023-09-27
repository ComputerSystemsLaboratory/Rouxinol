#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(void){
  int m;
  string s;
  cin >> m;
  for(int i = 0; i < m; i++){
    cin >> s;
    set<string> train;
    train.insert(s);
    for(size_t j = 1; j < s.length(); j++){
      string a = s.substr(0, j);
      string b = s.substr(j);
      train.insert(b + a);
      reverse(a.begin(), a.end());
      train.insert(a + b);
      train.insert(b + a);
      reverse(b.begin(), b.end());
      train.insert(a + b);
      train.insert(b + a);
      reverse(a.begin(), a.end());
      train.insert(a + b);
      train.insert(b + a);
    }
    cout << train.size() << endl;
  }

  return 0;
}