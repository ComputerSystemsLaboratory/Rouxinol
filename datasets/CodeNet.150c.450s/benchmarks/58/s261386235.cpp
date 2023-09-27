#include <iostream>
#include <stack>
#include <vector>
#include <set>
#include <sstream>
using namespace std;

int main() {
  string c;
  stack<int> nums;
  while(cin >> c) {
    if(set<string>({"*", "+", "-"}).count(c)) {
      int b = nums.top();
      nums.pop();
      int a = nums.top();
      nums.pop();
      nums.push(
          (c == "+") ? a + b :
          (c == "-") ? a - b :
          a * b
      );
    } else {
      stringstream ss;
      ss << c;
      int n;
      ss >> n;
      nums.push(n);
    }
  }
  cout << nums.top() << endl;
  return 0;
}