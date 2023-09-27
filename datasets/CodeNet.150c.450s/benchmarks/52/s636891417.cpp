#include <algorithm>
#include <iostream>
#include <cstdio>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <string.h>
#include <stack>
using namespace std;

#define ISEQ(c) (c).begin(), (c).end()
typedef long long ll;

int main() {
  stack<int> st;
  int n;
  while(cin >> n) {
    if (!n) {
      cout << st.top() << endl;
      st.pop();
    } else {
      st.push(n);
    }
  }
}