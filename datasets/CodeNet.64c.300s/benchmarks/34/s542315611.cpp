#include <iostream>
#include <algorithm>

void show(const int a[], const int N){
  for(int i =0; i<N;++i){
    std::cout << (i==0 ? "" : " ") << a[i];
  }
  std::cout << std::endl;
}

int main(){
  int N;
  int a[100];
  std::cin >> N;
  
  for (int i=0;i<N;++i){
    std::cin >> a[i];
  }
  
  show(a, N);
  for (int i=1; i<N; ++i){
    int k = a[i];
    int j = i -1;
    while( j >= 0 && a[j] > k){
      a[j+1] = a[j];
      --j;
    }
    a[j+1] = k;
    show(a, N);
  }

  std::cout << std::flush;
}