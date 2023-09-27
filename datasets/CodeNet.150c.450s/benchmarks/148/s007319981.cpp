#include <iostream>
#include <string>
int main()
{
  int N;
  std::cin >> N;
  int status[4] = {0,0,0,0};
  for (int i=0; i<N; i++) {
    std::string st;
    std::cin >> st;
    if (st == "AC") status[0]++;
    else if (st == "WA") status[1]++;
    else if (st == "TLE") status[2]++;
    else status[3]++;
  }
  std::cout << "AC x " << status[0] << std::endl;
  std::cout << "WA x " << status[1] << std::endl;
  std::cout << "TLE x " << status[2] << std::endl;
  std::cout << "RE x " << status[3] << std::endl;
  return 0;
}
