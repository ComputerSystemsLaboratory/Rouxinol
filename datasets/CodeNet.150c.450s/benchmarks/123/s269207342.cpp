#include <iostream>
#include <vector>
#include <cmath>


bool is_prime(int a) {
  int max_candidate = static_cast<int>(std::sqrt(a));
  if (a % 2 == 0 && a != 2)
    return false;
  for(int i = 3; i <= max_candidate; i += 2){
    if ( a % i == 0 )
      return false;
  }
  return true;
}


int main(){
  int N;
  std::cin >> N;

  std::vector<int> list(N);
  int input;
  while(std::cin >> input){
    list.push_back(input);
  }

  int num_of_prime = 0;
  for(const auto& num : list)
    if (is_prime(num))
      ++num_of_prime;

  std::cout << num_of_prime << std::endl;
}