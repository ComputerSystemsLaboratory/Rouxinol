#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
  int ret = 0;
  for(int i = 0;i < 2;i++){
    int p = 0;
    for(int j = 0;j < 4;j++){
      int t;
      cin >> t;
      p += t;
    }
    ret = max(ret,p);
  }
  cout << ret << endl;
}