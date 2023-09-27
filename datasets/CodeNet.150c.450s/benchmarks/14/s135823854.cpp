/**
 * StructureProgramming.cpp
 * Create:20180420
 * Description:入力された数値nまでの
 * 3の倍数と、１の位が3となる数値を表記する。
 */
#include <iostream>

/**
 * 表記関数
 * @param n 判定対象数値
 */
void call(int i){
  int n = i;
  if (n % 3 == 0) {
    std::cout << " " << i;
  } else {
    while (n > 0) {
      if (n % 10 == 3){
        std::cout << " " << i;
        break;
      }
      n /= 10;
    }
  }
}

int main(int argc, char* argv[]){
  int n;

  std::cin >> n;

  for (int i = 3; i <= n; i++){
    call(i);
  }

  std::cout << std::endl;

  return 0;
}
