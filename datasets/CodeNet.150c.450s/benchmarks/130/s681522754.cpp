/**
 * MatrixVectorMultiplication.cpp
 * Create:20180423
 * Description:行列の積を出力するプログラム
 */
#include <iostream>
#include <array>

int main(int argc, char* argv[]){
  // 行列の大きさを設定する。
  int height;
  int width;

  std::cin >> height >> width;

  int a[height][width];
  int b[width];

  // 行列aの入力
  for (int i = 0; i < height; i++){
    for (int j = 0; j < width; j++){
      std::cin >> a[i][j];
    }
  }

  // 行列bの入力
  for (int k = 0; k < width; k++){
    std::cin >> b[k];
  }

  for (int i = 0; i < height; i++){
    int ans = 0;
    for (int j = 0; j < width; j++){
      ans += a[i][j] * b[j];
    }
    std::cout << ans << std::endl;
  }

  return 0;
}
