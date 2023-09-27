#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int a;
  vector<int> v;

  for (unsigned int i = 0; i < 10; i++) {
    cin >> a;
    v.push_back(a);
    if (cin.eof()) { break; }
  }

  sort(v.begin(), v.end(), greater<int>());

  for (unsigned int i = 0; i < 3; i++) {
    cout << v[i] << endl;
  }

  return 0;
}