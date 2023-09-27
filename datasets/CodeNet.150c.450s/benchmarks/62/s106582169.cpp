#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;
int main(){
  vector<int> a;
  int x;
  cin >> x;
  a.push_back(x);
  cin >> x;
  a.push_back(x);
  cin >> x;
  a.push_back(x);
  sort(a.begin(), a.end());
  cout << a[0] << " " << a[1] << " " << a[2] << endl;
  return 0;
}
