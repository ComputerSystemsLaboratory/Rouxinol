// complete binary tree
#include<iostream>
int parent(int);
int left(int);
int right(int);
int main(){
  int *T, n, i;
  std::cin >> n;
  T = new int[n+1];
  for(i=1; i<=n; i++) std::cin >> T[i];
  for(i=1; i<=n; i++){
    std::cout << "node " << i << ": key = " << T[i] <<", ";
    if(i != 1) std::cout << "parent key = " << T[parent(i)] << ", ";
    if(left(i) <= n) std::cout << "left key = " << T[left(i)] << ", ";
    if(right(i) <= n) std::cout << "right key = " << T[right(i)] << ", ";
    std::cout << "\n";
  }
  return 0;
}
int parent(int n){
  return n/2;
}
int left(int n){
  return 2*n;
}
int right(int n){
  return 2*n+1;
}