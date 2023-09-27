#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <cassert>
#include <memory>
#include <stack>
#include <set>

#define MAX_SIZE 100000000
typedef unsigned long long ull;
using namespace std;

class Dict {
private:
  set<string> set_;

public:
  Dict() :
    set_(set<string>())
  {}

  void insert(const string& val) {
    set_.insert(val);
  }

  bool find(const string& val) const {
    auto result = set_.find(val);
    return result == set_.end() ? false : true;
  }
};

int main() {
  int n; cin >> n;

  Dict dict{};
  for(int i = 0; i < n; i++) {
    string command, value;
    cin >> command >> value;

    if(command == "insert") {
      dict.insert(value);
    } else if(command == "find") {
      if(dict.find(value)) {
        cout << "yes" << endl;
      } else {
        cout << "no" << endl;
      }
    }
  }
}

