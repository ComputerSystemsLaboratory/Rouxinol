#include <iostream>


int main()
{

  while (true)
  {
    int n;
    std::cin >> n;

    if (n == 0)
      break;
    
    int num = 0;
    
    for (int j = 2; j < n; j++)
      for (int i = 1; i < n; i++)
	if ((2*i + j - 1) * j == 2 * n)
	  num++;
    
    std::cout << num << std::endl;
  }
  
  return 0;
}