#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  int n, m;
  string key;
  vector<string> vec_keys;
  bool isOpend = true;
  
  cin >> n;
  cin.ignore();
  while (n--) {
    cin >> key;
    cin.ignore();
    vec_keys.push_back(key);
  }

  cin >> m;
  cin.ignore();
  while (m--) {
    cin >> key;
    cin.ignore();
    auto itr = find(vec_keys.begin(), vec_keys.end(), key);
    if (itr != vec_keys.end()) {
      isOpend ? cout << "Opened by " << key << endl :
        cout << "Closed by " << key << endl;
      isOpend ^= 0x01;
    } else {
      cout << "Unknown " << key << endl;
    }
  }
}

