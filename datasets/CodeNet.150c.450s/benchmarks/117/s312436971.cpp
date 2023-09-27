#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iterator>
#include <numeric>
#include <functional>
#include <climits>



using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int cnt = 0;;

void merge(vector<int>& v, int l, int m, int r){
  int n1 = m-l;
  int n2 = r-m;
  vector<int> v1(n1+1);
  vector<int> v2(n2+1);
  for (size_t i = 0; i < n1; i++) {
    v1[i] = v[l+i];
  }
  for (size_t i = 0; i < n2; i++) {
    v2[i] = v[m+i];    
  }
  v1.back() = INT_MAX;
  v2.back() = INT_MAX;
  int i = 0, j = 0;
  for (size_t k = l; k < r; k++) {
    cnt++;
    if(v1[i] < v2[j]){
      v[k] = v1[i++];
    } else{
      v[k] = v2[j++];
    }
  }
}

void mergeSort(vector<int>& v, int l, int r){
  if(l+1 < r){
    int m = (l + r) / 2;
    mergeSort(v, l, m);
    mergeSort(v, m, r);
    merge(v, l, m, r);
  }
}

int main(int argc, char *argv[]){
  size_t n;
  cin >> n;
  vector<int> v(n);
  for (size_t i = 0; i < n; i++) {
    cin >> v[i];
  }
  mergeSort(v, 0, n);
  for (size_t i = 0; i < n-1; i++) {
    cout << v[i] << " ";
  }
  cout << v.back() << endl;
  cout << cnt << endl;


  return 0;
}