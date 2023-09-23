#include <iostream>

int main(void){
  int n;
  int Acard[10000], Bcard[10000];

  while(1){
    int playerA = 0, playerB = 0;
    std::cin >> n;
    if(n == 0)  return 0;

    for(int i=0; i < n ; i++){
      std::cin >> Acard[i]; std::cin >> Bcard[i];
    }

    for(int i=0; i < n; i++){
      if(Acard[i] == Bcard[i]){
        playerA += Acard[i];  playerB += Bcard[i];
      }else if(Acard[i] > Bcard[i]){
        playerA += Acard[i] + Bcard[i];
      }else{
        playerB += Acard[i] + Bcard[i];
      }
    }

    std::cout << playerA << " " << playerB << std::endl;
  }
}