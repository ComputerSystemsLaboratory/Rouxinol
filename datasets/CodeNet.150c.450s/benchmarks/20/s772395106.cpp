#include <iostream>

int main()
{
  int total_sec = 0;
  std::cin >> total_sec;
  
  const int hour = total_sec / 3600;
  const int min = (total_sec % 3600) / 60;
  const int sec = total_sec % 60;

  std::cout << hour << ":" << min << ":" << sec << std::endl;

  return 0;
}