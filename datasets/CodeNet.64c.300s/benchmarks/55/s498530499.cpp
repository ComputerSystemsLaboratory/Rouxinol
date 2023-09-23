#include <iostream>

int main()
{
  const int end_input = 0;
  int case_count = 1;

  while (1) {
    int input;
    std::cin >> input;
    if (input == end_input) break;

    std::cout 
      << "Case " << case_count << ": " 
      << input << std::endl;

    ++case_count;
  }

  return 0;
}