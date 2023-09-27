#include <iostream>
#include <array>

int main(){
  std::array<int, 4> a = {};
  std::array<int, 4> b = {};
  int hit = 0;
  int blow = 0;
  int N = 0;

  while(N <= 50 && std::cin >> a[0] >> a[1] >> a[2] >> a[3] && std::cin >> b[0] >> b[1] >> b[2] >> b[3]){
    

    for(int i = 0;i < 4;++i){
      for(int j = 0;j < 4;++j){
	if(a[i] == b[j] && i == j)
	  ++hit;
	if(a[i] == b[j] && i != j)
	  ++blow;
      }
    }
    std::cout << hit << " " << blow << std::endl;

    hit = 0;
    blow = 0;
    ++N;
  }
}

