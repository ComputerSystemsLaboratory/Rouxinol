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

int cnt = 0;

void merge(vector<int> &v, int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  vector<int> l(n1+1);
  vector<int> r(n2+1);
  for(int i=0;i<n1;i++){
    l[i] = v[left + i];
  }
  for(int i=0;i<n2;i++){
    r[i] = v[mid + i];
  }
  l[n1] = 1000000007;
  r[n2] = 1000000007;
  int i=0, j=0;
  for(int k = left;k<right;k++){
    cnt++;
    if(l[i] <= r[j]){
      v[k] = l[i++];
    }else{
      v[k] = r[j++];
    }
  }
}

void mergeSort(vector<int> &v, int left, int right){
  if(left+1 < right){
    int mid = (left + right) / 2;
    mergeSort(v, left, mid);
    mergeSort(v, mid, right);
    merge(v, left, mid, right);
  }
}

int main(void){
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
    cin >> v[i];

  mergeSort(v, 0, n);


  for(int i=0;i<n;i++){
    cout << v[i];
    if(i != n-1)
      cout << " ";
  }
  cout << endl;
  cout << cnt << endl;

  return 0;
}