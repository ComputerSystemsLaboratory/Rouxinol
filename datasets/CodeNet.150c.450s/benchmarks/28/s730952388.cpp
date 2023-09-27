#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
#include <queue>
using namespace std;

int main(void){
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  vector<int> sum(k, 0);
  for(int i=0;i<n;i++)  cin >> v[i];

  int left = 0, right = 1000000000;
  while(left+1 < right){
    int mid = (left + right) / 2;
    int num = 0;
    for(int i=0;i<k;i++){
      int size = mid;
      while(1){
        if(num == n)break;
        if(size - v[num] < 0)break;
        size -= v[num++];
      }
      if(num == n)break;
    }
    if(num == n)
      right = mid;
    else 
      left = mid;
  } 
  cout << left + 1 << endl;
  return 0;
}