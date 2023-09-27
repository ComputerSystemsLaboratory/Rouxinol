#include <iostream>

int main(int argc, char const *argv[]) {
  int n=0;
  std::cin >> n;
  int a[n];
  for(int i=0;i<n;i++){
    int x;
    std::cin >> x;
    a[i] = x;
  }

  for(int i=n-1;i>=0;i--){
    if(i!=0){
      std::cout << a[i] << " ";
    }else std::cout << a[i];
  }
  std::cout << std::endl;
  return 0;
}