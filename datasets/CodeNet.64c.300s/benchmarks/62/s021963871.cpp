#include <iostream>


int dot(int vec1[100], int vec2[100], int size){
  int ans = 0;
  for (int i = 0; i < size; i ++) {
    ans += vec1[i] * vec2[i];
  }
  return ans;
}


void product(int matrix[100][100], int vector[100], int size_x, int size_y, int result[100]){
  for (int i = 0; i < size_x; i ++) {
    result[i] = dot(matrix[i], vector, size_y);
  }

}


int main() {
  int n, m, value;
  int matrix[100][100] = {0}, vector[100] = {0}, result[100] = {0};

  std::cin >> n >> m;
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < m; j ++) {
      std::cin >> value;
      matrix[i][j] = value;
    }
  }

  for (int j = 0; j < m; j ++) {
    std::cin >> value;
    vector[j] = value;
  }


  product(matrix, vector, n, m, result);

  for (int i = 0; i < n; i ++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}

