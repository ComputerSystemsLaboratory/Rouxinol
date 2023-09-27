#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;
  int temp;
  
  while(cin>>temp) v.push_back(temp);
  int mx=0, cnt[101] = {};
  for(int i = 0; i < v.size(); i++) mx = max(mx, ++cnt[v[i]]);
  for(int i = 0; i < 101; i++) if(mx == cnt[i]) cout << i << endl;
  return 0;
}