#include <set>
#include <array>
#include <iostream>

int main()
{
  std::array<int,8> hitting;
  std::set<int> blowing;
  while(std::cin >> hitting[0]){
    blowing.insert(hitting[0]);
    for(int i=1;i<8;++i){
      std::cin >> hitting[i];
      blowing.insert(hitting[i]);
    }
    int num=0;
    for(int j=0;j<4;++j){
      if(hitting[j]==hitting[j+4]){
        ++num;
     }
    }
    std::cout << num << " " << 8-(int)(blowing.size())-num << std::endl;
    blowing.clear();
  }
return 0;
}