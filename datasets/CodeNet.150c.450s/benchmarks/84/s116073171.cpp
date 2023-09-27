#include <iostream>
#include <cmath>
#define maxint 2147483647;
typedef long long ll;
void dump(int a[],int n)
{
  for (int codeTest = 0; codeTest < n; ++codeTest) {
    if (codeTest!=0)std::cout << " ";
    std::cout << a[codeTest];
  }
  std::cout << '\n';
}

ll c=0;
void merge(int *a,int left,int mid,int right) {
  int n1=mid-left,n2=right-mid;
  int i,j=0,k=0;
  int l[300000],r[300000];
  for (i = 0; i < n1; ++i) {l[i]=a[left+i];}
  for (i = 0; i < n2; ++i) {r[i]=a[mid+i];}
  l[n1]=maxint;r[n2]=maxint;
  for (i = left; i < right; ++i) {
    if (l[j]<r[k]) {
      a[i]=l[j];
      ++j;
    }else{
      a[i]=r[k];
      c+=n1+k-i+left;
      ++k;
    }
  }
}

void mergeSort(int *a,int left,int right) {
  int mid;
  if (left+1 < right){
    mid = (left + right)/2;
    mergeSort(a, left, mid);
    mergeSort(a, mid, right);
    merge(a, left, mid, right);
  }
}
int main() {
  int n;
  int a[500000];
  std::cin >> n;
  for (int i = 0; i < n; ++i) {std::cin >> a[i];}
  mergeSort(a,0,n);
  std::cout << c << '\n';
  return 0;
}

