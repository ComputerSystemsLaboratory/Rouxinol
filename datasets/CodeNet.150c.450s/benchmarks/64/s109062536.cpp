#include<iostream>
bool ex(int, int);
int A[20],n;
int main(){
  int m, input;
  std::cin >> n;
  for(int i=0; i<n; i++) std::cin >> A[i];
  std::cin >> m;
  for(int i=0; i<m; i++){
    std::cin >> input;
    std::cout << (ex(input,0) ? "yes\n" : "no\n");
  }
  return 0;
}

bool ex(int x, int i){
  if(x == 0) return true;
  for(int j=i; j<n; j++) if(ex(x-A[j],j+1)) return true;
  return false;
}