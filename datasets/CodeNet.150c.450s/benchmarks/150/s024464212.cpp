#include <cstdio>
#include <vector>
using namespace std;

int n;
void counting_sort(vector<int>& A,vector<int>& B,int k) {
  int C[k+1];
  // 0 initialize
  for(int i=0;i<=k;i++) {
    C[i] = 0;
  }
  // counting A_j
  for(int j=1;j<=n;j++) {
    C[A[j]]++;
  }
  // counting less than A_j
  for(int i=1;i<=k;i++) {
    C[i] = C[i] + C[i-1];
  }
  // sorting
  for(int j=n;j>=1;j--) {
    B[C[A[j]]] = A[j];
    C[A[j]]--;
  }
}

int max(vector<int>& A) {
  int max = A[1];
  for(int i=1;i<=n;i++) {
    if(A[i] > max) max = A[i];
  }
  return max;
}

int main() {
  scanf("%d",&n);
  vector<int> A(n+1);
  vector<int> B(n+1);
  for(int i=1;i<=n;i++) {
    scanf("%d ", &A[i]);
  }

  counting_sort(A,B,max(A));
  for(int i=1;i<n;i++) {
    printf("%d ",B[i]);
  }
  printf("%d\n",B[n]);
}