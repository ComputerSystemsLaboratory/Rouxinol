#include <bits/stdc++.h>
using namespace std;

int main()
{
  priority_queue<int> pqi;
  string str;
  while (cin >> str, str != "end"){
    if (str == "insert") {
      int n;
      cin >> n;
      pqi.push(n);
    }
    else if (str == "extract") {
      cout << pqi.top() << "\n";
      pqi.pop();
    }
  }
}