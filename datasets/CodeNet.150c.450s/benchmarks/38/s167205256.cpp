#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    vector<int> array;
    int a;
    cin >> a;
    array.push_back(a);
    cin >> a;
    array.push_back(a);
    cin >> a;
    array.push_back(a);
    sort(array.begin(), array.end(), greater<int>());
    cout << (array[0] * array[0] == array[1] * array[1] + array[2] * array[2] ? "YES" : "NO") << endl;
  }
}