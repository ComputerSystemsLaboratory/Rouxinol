#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> a(5);
  for (int i = 0; i < 5; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end(), greater<int>());
  for (int i = 0; i < 5; i++) {
    if (i == 4)
    cout << a.at(i) << endl;
    else
    cout << a.at(i) << " ";
  }
}
