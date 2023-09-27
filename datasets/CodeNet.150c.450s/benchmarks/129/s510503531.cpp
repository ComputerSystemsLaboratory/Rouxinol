#include<iostream>
#include<vector>
int main(){
  int r,c,total=0;
  std::vector<int> sumr,sumc;
  std::vector<std::vector<int> > M;
  std::cin >> r >> c;
  sumr.resize(r);
  sumc.resize(c);
  M.resize(r);
  for(int i=0; i<r; i++){
    M[i].resize(c);
  }
  for(int i=0; (r<c ? i<c : i<r) ; i++){
    if(i < r) sumr[i] = 0;
    if(i < c) sumc[i] = 0;
  }
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      std::cin >> M[i][j];
      sumr[i] += M[i][j];
      sumc[j] += M[i][j];
      total += M[i][j];
    }
  }
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      std::cout << M[i][j] << " ";
    }
    std::cout << sumr[i] << "\n";
  }
  for(int i=0; i<c; i++){
    std::cout << sumc[i] << " ";
  }
  std::cout << total << "\n";
  return 0;
}