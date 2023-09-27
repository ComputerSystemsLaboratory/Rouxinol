#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int selection_sort(vector<int> &list) {
  int count = 0;
  for (int i = 0; i < list.size(); ++i) {
    int mini = i;
    for (int j = i + 1; j < list.size(); ++j) {
      if (list[j] < list[mini]) {
        mini = j;
      }
    }
    if (mini != i) {
      count++;
      int tmp = list[mini];
      list[mini] = list[i];
      list[i] = tmp;
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
  int count = selection_sort(v);
  for (auto iter = v.begin(); iter != v.end() - 1; ++iter) {
    cout << *iter << " ";
  }
  cout << v.back() << endl;
  cout << count << endl;
}