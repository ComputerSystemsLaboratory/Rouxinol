#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <numeric>
#include <algorithm>
#include <stdio.h>

int main(void){
  int n;
  long long s;
  std::cin >> n;
  std::vector<int> f(1000500);
  for(int x=1;x<=102;x++){
    for(int y=1;y<=102;y++){
      for(int z=1;z<=102;z++){
        s=x*x+y*y+z*z+x*y+y*z+z*x;
        f.at(s-1)+=1;
      }
    }
  }
  for(int i=0;i<n;i++){
    std::cout << f.at(i) << std::endl;
  }
  return 0;
}