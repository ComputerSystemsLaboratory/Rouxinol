#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int>& A,int p,int r) {
  int x = A[r];
  int i = p - 1;
  for(int j=p;j<r;j++) {
    if(A[j] <= x) {
      i++;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
  return i+1;
}

int main() {
  int n;
  scanf("%d",&n);
  vector<int> A(n);
  for(int i=0;i<n;i++) {
    scanf("%d ",&A[i]);
  }
  int p = partition(A,0,n-1);
  for(int i=0;i<n;i++) {
    if(i == p) {
      printf("[");
      printf("%d",A[i]);
      printf("]");
    }
    else {
      printf("%d",A[i]);
    }

    if(i+1 == n)
      printf("\n");
    else
      printf(" ");
  }
}