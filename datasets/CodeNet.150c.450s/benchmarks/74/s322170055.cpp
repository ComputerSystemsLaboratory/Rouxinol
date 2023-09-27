

#include <iostream>


int main(){
  int n, m, l;
  std::cin >> n;
  std::cin >> m;
  int T[n], C[m];

  for(int j = 0; j < n+1; j++){
    T[j] =  50010;
  }
  T[0] = 0;

  for(int i = 0; i < m; i++){
    std::cin >> C[i];
  }

  for(int k = 0; k < m ; k++){
    for(l = C[k]; l < n+1; l++){
      T[l] = std::min(T[l], T[l - C[k]] + 1);
    }

  }

  std::cout << T[n] <<"\n";

  return (0);
}