#include <iostream>
#include <vector>
#include <climits>


int main(void){
  while(1){
    int n;
    std::vector<signed int> s;
    std::vector<signed int>::iterator it;

    std::cin >> n;
    if(n == 0) return 0;
    for(int i=0; i < n; i++){
      int inputting;
      std::cin >> inputting;
      s.push_back(inputting);
    }


    int max = -1, min = INT_MAX;
    std::vector<signed int>::iterator maxind;
    std::vector<signed int>::iterator minind;
    for(it = s.begin(); it != s.end(); ++it){
      if(*it > max){
        max = *it;
        maxind = it;
      }
    }
    s.erase(maxind);

    for(it = s.begin(); it != s.end(); ++it){
      if(*it < min){
        min = *it;
        minind = it;
      }
    }
    s.erase(minind);

    int sum = 0, avr;
    for(it = s.begin(); it != s.end(); it++){
      sum += *it;
    }
    std::cout << sum / s.size() << std::endl;
  }
}