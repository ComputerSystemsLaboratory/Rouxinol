#include <iostream>

int main()
{
  int n, s;
  while(std::cin >> n && n > 0){
    int average = 0;
    int max = 0;
    int min = 1000;
    for(int i=0; i<n; i++){
      int tmp;
      std::cin >> tmp;
      if(tmp > max){ max = tmp; };
      if(tmp < min){ min = tmp; };
      average += tmp;
    }
    average -= (max + min);
    std::cout << (average / (n - 2)) << std::endl;
  }
  return 0;
}