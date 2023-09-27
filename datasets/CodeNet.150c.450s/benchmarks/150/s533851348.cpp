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
  vector<int> a(n);
  vector<int> b(n);
  vector<int> k(10001);
  for(int i=0;i<n;i++)
    cin >> a[i];

  for(int i=0;i<n;i++){
    k[a[i]]++;
  }
  for(int i=1;i<k.size();i++){
    k[i] += k[i-1];
  }

  for(int i=n-1;i>=0;i--){
    b[k[a[i]]-1] = a[i];
    k[a[i]]--;
  }

  for(int i=0;i<n;i++){
    cout << b[i];
    if(i != n-1)
      cout << " ";
  }
  cout << endl;

  return 0;
}