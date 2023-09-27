#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <climits>
#include <sstream>

using namespace std;

int num;
long long int num_inverse;


void merge(int *a, int left, int mid, int right){

  int n1 = mid-left;
  int n2 = right-mid;

  int *L = new int[n1+1];
  int *R = new int[n2+1];

  for(int i=0;i<n1;i++){
    L[i] = a[left+i];
  }

  for(int i=0;i<n2;i++){
    R[i] = a[mid+i];
  }

  L[n1] = INT_MAX;
  R[n2] = INT_MAX;

  int i = 0;
  int j = 0;

  for(int k = left;k<right;k++){
    num++;
    if(L[i] < R[j]){
      a[k] = L[i];
      i += 1;
    }else{
      a[k] = R[j];
      num_inverse += (n1 - i);
      j += 1;
    }
  }
  return;
}

void mergeSort(int *a, int left, int right){
  int num=0;
  int num_inverse = 0;
  if(left+1<right){
    int mid = (left + right)/2;
    mergeSort(a, left, mid);
    mergeSort(a, mid, right);
    merge(a, left, mid, right);
  }
  return;
}


int main(){
  num = 0;
  int n;
  cin >> n;
  int *S = new int[n];

  for(int i=0;i<n;i++){
    int tmp;
    cin >> tmp;
    S[i] = tmp;
  }


  mergeSort(S, 0, n);

  for(int i=0;i<n;i++){
    // if(i!=0){cout<<" ";}
    // cout << S[i];
  }
  // cout << endl;

  // cout << num << endl;
  cout << num_inverse << endl;
}