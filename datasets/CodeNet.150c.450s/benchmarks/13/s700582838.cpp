#include <iostream>
#include <string>

using namespace std;

int main() {
  string ring, target;
  cin >> ring;
  cin >> target;

  bool is_find = false;
  for(int i=0; i<ring.length(); i++) {
    int pos = i;
    int len = ring.length();
    bool flag = true;
    for(int j=0; j<target.length(); j++) {
      if(ring[pos] != target[j]) {
        flag = false;
        break;
      }
      pos = (pos+1) % len;
    }
    if(flag) {
      is_find = true;
      cout << "Yes" << endl;
      break;
    }
  }
  
  if(!is_find) {
    cout << "No" << endl;
  }
  return 0;
}