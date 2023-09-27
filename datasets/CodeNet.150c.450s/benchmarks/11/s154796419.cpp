#include <iostream>

int main(int argc, char const *argv[]) {
  int n;
  int cards[4][13] = {};
  std::cin >> n;

  for(int i=0;i<n;i++){
    char mark;
    int num;
    std::cin >> mark >> num;
    switch(mark){
      case 'S':
        cards[0][num-1] = 1;
        break;
      case 'H':
        cards[1][num-1] = 1;
        break;
      case 'C':
        cards[2][num-1] = 1;
        break;
      case 'D':
        cards[3][num-1] = 1;
        break;
      default:
        break;
    }
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<13;j++){
      if(!cards[i][j]){
        switch(i){
          case 0:
            std::cout << "S " << (j+1) << std::endl;
            break;
          case 1:
            std::cout << "H " << (j+1) << std::endl;
            break;
          case 2:
            std::cout << "C " << (j+1) << std::endl;
            break;
          case 3:
            std::cout << "D " << (j+1) << std::endl;
            break;
        }
      }
    }
  }
  return 0;
}