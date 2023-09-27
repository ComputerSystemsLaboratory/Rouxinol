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
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin >> v[i];
  }
  int r = n -1;
  int p = 0;
  int x = v[r];
  int i = p-1;
  for(int j=p;j<r;j++){
    if(v[j] <= x){
      swap(v[++i], v[j]);
    }
  }
  swap(v[i+1], v[r]);

  int val = i+1;

  for(int i=0;i<n;i++){
    if(i == val) cout << "[" << v[i] << "]";
     else cout << v[i];
    if(i!=n-1)
      cout << " ";
    else
      cout << endl;
  }

  return 0;
}