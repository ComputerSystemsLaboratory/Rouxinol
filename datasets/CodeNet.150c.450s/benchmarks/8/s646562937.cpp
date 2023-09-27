#include <iostream>

int main(){
  int num, lim;
  int t_score = 0, h_score = 0;
  std::string t_card, h_card;

  std::cin >> num;
  for(int i=0; i<num; i++){
    std::cin >> t_card >> h_card;
    if(t_card == h_card){
      t_score += 1;
      h_score += 1;
      continue;
    }

    if(t_card.size() < h_card.size()) lim = t_card.size();
    else lim = h_card.size();

    for(int j=0; j<lim; j++){
      if(t_card[j]==h_card[j]){
        if(j == lim-1 && t_card.size() < h_card.size()) h_score += 3;
        else if(j == lim-1 && t_card.size() > h_card.size()) t_score += 3;
        else continue;
      }

      else if((int)t_card[j] > (int)h_card[j]){
        t_score += 3;
        break;
      }

      else{
        h_score += 3;
        break;
      }

    }
  }

  std::cout << t_score << ' ' << h_score << std::endl;
}

