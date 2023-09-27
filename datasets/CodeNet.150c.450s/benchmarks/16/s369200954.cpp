#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void){
  stack<int> slopes;
  stack<pair<int, int>> lakes;
  int sum = 0;
  char ch; 
  for (int i = 0; (cin >> ch); i++) {
    if (ch == '\\') slopes.push(i);
    else if (ch == '/' && slopes.size() > 0) {
      int j = slopes.top(); slopes.pop();
      sum += i - j;
      
      int a = i - j;
      while (lakes.size() > 0 && lakes.top().first > j) {
        a += lakes.top().second; lakes.pop();
      }
      lakes.push(make_pair(j, a));
    }
  }
  
  vector<int> vec;
  while (!lakes.empty()) { vec.push_back(lakes.top().second); lakes.pop(); }
  
  cout << sum << endl;
  int n = vec.size();
  cout << n;
  for (int i = 0; i < n; i++) {
    cout << " " << vec.back(); vec.pop_back();
  }
  cout << endl;
  
  return 0;
}