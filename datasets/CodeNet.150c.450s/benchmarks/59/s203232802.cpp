#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void insertion_sort(vector<int> &list) {
  for (int i = 1; i < list.size(); ++i) {
    for (auto iter = list.begin(); iter != list.end()-1; ++iter) {
      cout << *iter << " ";
    }
    cout << list.back() << endl;
    int key = list[i];
    int j = i - 1;
    while (j >= 0 && list[j] > key) {
      list[j+1] = list[j];
      j--;
    }
    list[j+1] = key;
  }
}

int main() {
  string str;
  int N;
  cin >> N; cin.ignore();
  getline(cin, str);
  istringstream istr(str);
  string tmp;
  vector<int> v;
  while (getline(istr, tmp, ' ')) {
    v.push_back(stoi(tmp));
  }
  insertion_sort(v);
  for (auto iter = v.begin(); iter != v.end()-1; ++iter) {
    cout << *iter << " ";
  }
  cout << v.back() << endl;
}