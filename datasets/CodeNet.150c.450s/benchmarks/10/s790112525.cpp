#include <iostream>

int main(int argc, char const *argv[]) {
  int house[4][3][10] = {};
  int n;
  std::cin >> n;
  for(int i=0;i<n;i++){
    int block,floar,r,v;
    std::cin >> block >> floar >> r >> v;
    if(v > 0){
      house[block-1][floar-1][r-1] += v;
      if(house[block-1][floar-1][r-1] > 10) house[block-1][floar-1][r-1] = 10;
    }else{
      house[block-1][floar-1][r-1] += v;
      if(house[block-1][floar-1][r-1] < 0)  house[block-1][floar-1][r-1] = 0;
    }
  }

  for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
      for(int k=0;k<10;k++){
        std::cout << " " <<house[i][j][k];
      }
      std::cout << std::endl;
    }
    if(i!=3){
      std::cout << "####################" << std::endl;
    }
  }
  return 0;
}