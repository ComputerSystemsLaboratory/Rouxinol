#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  int N;
  cin >> N;

  while (N--) {
    string str;
    cin>> str;
  vector<string> v;    
    v.resize(6 * (str.size() - 1) + 2);
    int idx = 0;  
    v[idx++] = str;
    for (int i = 1; i < str.size(); i++) {
      string head = str.substr(0, i);
      string tail = str.substr(i);      
      reverse(head.begin(), head.end());
      v[idx++] = head + tail;
      v[idx++] = tail + head;
      reverse(tail.begin(), tail.end());
      v[idx++] = head + tail;
      reverse(head.begin(), head.end());
      v[idx++] = head + tail;
      v[idx++] = tail + head;
      reverse(tail.begin(), tail.end());
      v[idx++] = tail + head;
    }
    reverse(str.begin(), str.end());
    v[idx++] = str;
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << v.size() << endl;;
  }
  return 0;
}