#include<iostream>
#include<math.h>
#include<iomanip>
#include<string.h>
#include<cstdio>
#include<cstdlib>
#include<stack>
#include<algorithm>

using namespace std;

long long int sum = 0;

void merge(int a[], int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  int l[n1 + 1], r[n2 + 1];
  for(int i = 0; i < n1; i++){
    l[i] = a[left + i];
  }
  l[n1] = 1000000000;
  for(int i = 0; i < n2; i++){
    r[i] = a[mid + i];
  }
  r[n2] = 1000000000;

  int j = 0, k = 0;
  for(int i = 0; i < n1 + n2; i++){
    if(l[j] <= r[k]){
      a[left + i] = l[j];
      j++;
    }
    else{
      a[left + i] = r[k];
      sum += n1 - j;
      k++;
    }
  }
}

void mergesort(int a[], int left, int right){
  if(left + 1 < right){
    int mid = (left + right)/ 2;
    mergesort(a, left, mid);
    mergesort(a, mid, right);
    merge(a, left, mid, right);
  }
}
int main(){

  int n;
  cin >> n;

  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  mergesort(a, 0, n);

  cout << sum << endl;



}
