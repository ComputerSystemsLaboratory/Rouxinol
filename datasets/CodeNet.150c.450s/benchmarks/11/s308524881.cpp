#include<iostream>

int main(){
  int n;
  int cards[4][13];
  char suit;
  int number;

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 13; j++){
      cards[i][j] = 0;
    }
  }

  std::cin >> n;

  for(int i = 0; i < n; i++){
    std::cin >> suit >> number;
    switch(suit){
    case 'S':
      cards[0][number - 1] = 1;
      break;
    case 'H':
      cards[1][number - 1] = 1;
      break;
    case 'C':
      cards[2][number - 1] = 1;
      break;
    case 'D':
      cards[3][number - 1] = 1;
      break;
    }
  }

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 13; j++){
      if(cards[i][j] == 0){
	switch(i){
	case 0:
	  std::cout << 'S' << ' ' << j + 1 << std::endl;
	  break;
	case 1:
	  std::cout << 'H' << ' ' << j + 1 << std::endl;
	  break;
	case 2:
	  std::cout << 'C' << ' ' << j + 1 << std::endl;
	  break;
	case 3:
	  std::cout << 'D' << ' ' << j + 1 << std::endl;
	  break;
	}
      }

    }
  }

  return 0;
}