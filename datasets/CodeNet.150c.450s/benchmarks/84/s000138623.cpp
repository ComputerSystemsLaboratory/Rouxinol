#include <cstdio>
#include <iostream>
#include <algorithm>
#define SENTINEL 2e9
using namespace std;
 
long long  cnt;
void Merge(int* A, int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  int *L,*R;
  L = new int[n1+1]; R=new int[n2+1];
  for(int i=0;i<n1;i++){
      L[i] = A[left + i];
  }
  for(int i = 0; i< n2;i++){
      R[i] = A[mid + i];
  }
  L[n1] = SENTINEL;
  R[n2] = SENTINEL;
  int i = 0;
  int j = 0;
  for(int k = left; k < right; k++){
    if(L[i] <= R[j]){
        A[k] = L[i];
        i = i + 1;
    } else {
		cnt += n1-i;
        A[k] = R[j];
        j = j + 1;
    }
  }
}
 
void Merge_Sort(int* A, int left, int right){
  if(left+1 < right){
    int mid = (left + right)/2;
    Merge_Sort(A, left, mid);
    Merge_Sort(A, mid, right);
    Merge(A, left, mid, right);
  }
}
          
int main(){
    int *a;
    int n;
    cnt = 0;
    scanf("%d",&n);
    a = new int[n];
    for(int i=0;i<n;i++){
        scanf(" %d",&a[i]);
    }
    Merge_Sort(a, 0, n);
    cout << cnt << endl;
    return 0;
}