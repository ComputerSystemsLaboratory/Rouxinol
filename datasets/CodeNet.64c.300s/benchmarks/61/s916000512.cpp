#include<iostream>

int main(){
  int r, c, sum;
  int cell[101][101];

  for(int i = 0; i < 101; i++){
    for(int j = 0; j < 101; j++){
      cell[i][j] = 0;
    }
  }

  std::cin >> r >> c;

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      std::cin >> cell[i][j];
    }
  }

  for(int i = 0; i < r; i++){
    sum = 0;
    for(int j = 0; j < c; j++){
      sum += cell[i][j];
    }
    cell[i][c] = sum;
  }

  for(int i = 0; i <= c; i++){
    sum = 0;
    for(int j = 0; j < r; j++){
      sum += cell[j][i];
    }
    cell[r][i] = sum;
  }


  for(int i = 0; i <= r; i++){
    for(int j = 0; j <= c; j++){
      std::cout << cell[i][j];
      if(j < c) std::cout << ' ';
    }
    std::cout << std::endl;
  }

  
  return 0;
}