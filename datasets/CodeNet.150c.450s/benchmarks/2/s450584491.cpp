#include <cstdio>
#include <utility>

constexpr int MAX_N = 100000;

int partition(int* A, int p, int r){
  int x = A[r];
  int i = p - 1;
  for(int j = p; j < r; j++){
    if(A[j] <= x){
      i++;
      std::swap(A[i], A[j]);
    }
  }
  std::swap(A[i+1], A[r]);
  return i+1;
}
int main(){
  int n;
  int result;
  int A[MAX_N];
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  result = partition(A, 0, n-1);







  for(int i = 0; i < n; i++){
    if(i == result){
      printf("[%d]", A[i]);
    } else {
      printf("%d", A[i]);
    }
    if(i+1 != n){
      printf(" ");
    } else {
      printf("\n");
    }
  }
}