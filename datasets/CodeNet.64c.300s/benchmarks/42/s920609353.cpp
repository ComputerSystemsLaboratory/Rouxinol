#include <iostream>

int main(void){
  while(true){
    int posx = 10, posy = 10;
    int cnt = 0;
    int numOfJewel, numOfOrder;
    bool isJewel[21][21];

    for(int i=0; i < 21; i++){
      for(int j =0; j < 21; j++){
        isJewel[i][j] = false;
      }
    }

    std::cin >> numOfJewel;
    if(numOfJewel == 0) return 0;
    for(int i=0; i < numOfJewel; i++){
      int x, y;
      std::cin >> x >> y;
      isJewel[y][x] = true;
    }

    std::cin >> numOfOrder;
    for(int i=0; i < numOfOrder; i++){
      char order;
      int dist;
      std::cin >> order >> dist;
      for(int j = 0; j < dist; j++){
        if(order == 'N'){
          posy++;
        }else if(order == 'S'){
          posy--;
        }else if(order == 'E'){
          posx++;
        }else if(order == 'W'){
          posx--;
        }
        if(isJewel[posy][posx] == true){
          cnt++;
          isJewel[posy][posx] = false;
        }
      }
    }
    if(cnt == numOfJewel){
      std::cout << "Yes" << std::endl;
    }else{
      std::cout << "No" << std::endl;
    }
  }
}