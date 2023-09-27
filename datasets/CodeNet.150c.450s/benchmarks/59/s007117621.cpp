#include <iostream>
#include <vector>
#include <string>

int main() {
  int N;
  std::cin >> N;

  std::vector<int> data(N);
  for(int i = 0; i < N; ++i) {
    std::cin >> data[i];
  }

  for(int i = 0; i < data.size(); ++i){
    auto key = data[i];
    auto j = i - 1;
    while( j >= 0 && data[j] > key ) {
      data[j + 1] = data[j];
      --j;
    }
    data[j + 1] = key;

    
    for( int i = 0; i < data.size() - 1; ++i )
      std::cout << data[i] << " ";
    if ( !data.empty() )
      std::cout << data.back();
    std::cout << std::endl;
  }

  return 0;
}