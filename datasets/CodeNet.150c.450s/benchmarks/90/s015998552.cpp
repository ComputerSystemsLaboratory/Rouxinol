#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
  int x, maxx = 0;
  int cnt[102];
  vector<int> v;

  memset(cnt, 0, sizeof(cnt));

  while(cin >> x){
    cnt[x]++;
    if(maxx < cnt[x]){
      maxx = cnt[x];
      v.clear();
      v.push_back(x);
    }
    else if(maxx == cnt[x]){
      v.push_back(x);
    }
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++){
    cout << v[i] << endl;
  }
}