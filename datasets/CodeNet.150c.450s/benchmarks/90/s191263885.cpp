#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  vector<int> cnt(100, 0);
  vector<int>::iterator itr = cnt.begin();
  int buf;

  while(cin >> buf) {
	cnt[buf - 1]++;
  }
  for(;;) {
	itr = find(itr, cnt.end(), *max_element(cnt.begin(), cnt.end()));
	if(itr == cnt.end()) break;
	cout << itr - cnt.begin() + 1<< endl;
	++itr;
  }
  return 0;
}