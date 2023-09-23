#include <iostream>
#include <utility>
int partition(int A[], int p, int r){
  int x;
  int i;

  using std::swap;

  x = A[r];
  i = p-1;
  for(int j=p; j<r; j++){
    if(A[j] <= x){
      i=i+1;
      std::swap(A[i], A[j]);
    }
  }
  std::swap(A[i+1], A[r]);
  return i+1;
}

int main(){
  int n;
  int A[100000];
  std::cin >> n;

  for(int i=0; i<n; i++){
    std::cin >> A[i];
  }
 int mid = partition(A, 0, n-1);
  for(int i=0; i<n; i++){
    if( i==mid ) std::cout << "[" << A[i] << "]";
    else  std::cout << A[i];
    if( i!=n-1 ) std::cout << " ";
  }
  std::cout << std::endl;
  return 0;
}

