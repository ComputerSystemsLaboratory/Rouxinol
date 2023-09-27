#include <vector>
#include <algorithm>
#include <iostream>

int SelectionSort( std::vector<int>& data )
{
  int cnt = 0;

  for( auto it = data.begin(); it != data.end(); ++it ) {
    auto mini_it = std::min_element(it, data.end());
    if ( it != mini_it ) {
      cnt++;
      std::swap(*it, *mini_it);
    }
  }

  return cnt;
}

int main()
{
  int N;
  std::cin >> N;
  std::vector<int> data(N);

  for(int i = 0; i < data.size(); ++i)
    std::cin >> data.at(i);

  int num = SelectionSort(data);

  std::cout << data.at(0);
  for(int i = 1; i < data.size(); ++i)
    std::cout << " " << data.at(i);
  std::cout << std::endl;

  std::cout << num << std::endl;
}