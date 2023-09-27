#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<int> h(10);
  for(int i=0;i<10;++i)
	cin >> h[i];
  sort(h.begin(), h.end());
  for(int i=0;i<3;++i)
	cout << h[9-i] << endl;
  return 0;
}