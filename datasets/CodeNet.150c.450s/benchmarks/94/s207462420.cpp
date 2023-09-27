#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int bubble_sort(vector<int> &list) {
  int count = 0;
  for (int i = 0; i < list.size(); ++i) {
    for (int j = list.size() - 1; j > i; --j) {
      if (list[j] < list[j-1]) {
        int tmp = list[j];
        list[j] = list[j-1];
        list[j-1] = tmp;
        count++;
      }
    }
  }
  return count;
}

int main() {
  int N;
  cin >> N;
  cin.ignore();
  string str;
  getline(cin, str);
  string tmp;
  vector<int> v;
  istringstream istr(str);
  while (getline(istr, tmp, ' ')) {
    v.push_back(stoi(tmp));
  }
  int count = bubble_sort(v);
  for (auto iter = v.begin(); iter != v.end() - 1; ++iter) {
    cout << *iter << " ";
  }
  cout << v.back() << endl;
  cout << count << endl;
}