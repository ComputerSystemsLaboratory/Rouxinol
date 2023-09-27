#include <cmath>
#include <cstdlib>

#include <iostream>
#include <vector>
#include <algorithm>

int main() {

  long N;
  long length[3];


  std::cin >> N;

  for(int i = 0; i < N; ++i) {

    std::cin >> length[0] >> length[1] >> length[2];
    std::sort(length, length+3);

    if(length[0]*length[0] + length[1]*length[1] == length[2]*length[2]) {
      std::cout << "YES" << std::endl;
    }
    else {
      std::cout << "NO" << std::endl;
    }

  }

  return 0;

}