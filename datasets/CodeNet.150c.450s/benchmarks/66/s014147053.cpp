#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
  int n;
  set<string> set1;
  string s;
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> s;
    set1.insert(s);
  }
  
  bool isOpen = 0;
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> s;
    if(set1.count(s)) {
      cout << (isOpen ? "Closed" : "Opened") << " by " << s << endl;
      isOpen = !isOpen;
    }
    else {
      cout << "Unknown " << s << endl;
    }
  }
  
  return 0;
}