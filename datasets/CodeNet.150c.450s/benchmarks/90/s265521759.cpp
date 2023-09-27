#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
  int n, max = 0;
  vector<int> v(101, 0);
  while(cin >> n) {
    v[n]++;
  }
    for(int i = 0; i < 100; i++) if(max < v[i]) max = v[i];
    for(int i = 0; i < 100; i++) if(max == v[i]) cout << i << endl;
    return 0;
}