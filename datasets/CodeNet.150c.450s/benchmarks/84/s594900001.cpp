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

long long cnt = 0;

void merge(vector<int> &v, int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  vector<int> l(n1 + 1);
  vector<int> r(n2 + 1);
  int i, j, k;
  for(int i=0;i<n1;i++){
    l[i] = v[left + i];
  }
  for(int i=0;i<n2;i++){
    r[i] = v[mid + i];
  }
  l[n1] = r[n2] = 1000000007;
  i = j = 0;
  for(k = left;k < right;k++){
    if(l[i] <= r[j]){
      v[k] = l[i++];
      cnt += j;
    }else{
      v[k] = r[j++];
    }
  }
}

void mergeSort(vector<int> &a, int left, int right){
  if(left+1 < right){
    int mid = (left + right)/2;
    mergeSort(a, left, mid);
    mergeSort(a, mid, right);
    merge(a, left, mid, right);
  }
}

int main(void){
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
    cin >> v[i];

  mergeSort(v, 0, n);
  cout << cnt << endl;
  return 0;
}