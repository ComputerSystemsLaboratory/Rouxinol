
#include <iostream>
#include <vector>

int BubbleSort( std::vector<int>& data ){
  bool flag = true;
  int cnt = 0;
  while(flag) {
    flag = false;
    for(int i = data.size() - 1; i >= 1; --i){
      if (data.at(i) < data.at(i - 1)) {
        std::swap(data[i], data[i - 1]);
        ++cnt;
        flag = true;
      }
    }
  }

  return cnt;
}

int main() {
  int N;
  std::cin >> N;

  std::vector<int> data(N);
  for(int i = 0; i < N; ++i)
    std::cin >> data[i];

  int cnt = BubbleSort(data);

  for(int i = 0; i < data.size() - 1; ++i)
    std::cout << data[i] << " ";
  std::cout << data.back() << std::endl;
  std::cout << cnt << std::endl;
}