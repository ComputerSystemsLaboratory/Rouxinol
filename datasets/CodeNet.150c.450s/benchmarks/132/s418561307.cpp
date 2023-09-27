#include <iostream>
#include <cstdint>
#include <vector>

using namespace std;

bool is_game_end(uint32_t num, vector<int32_t> &players)
{
  uint32_t has_stones = 0;
  uint32_t count = 0;

  for(uint32_t i = 0; i < players.size(); i++){
    if(players[i] > 0){
      has_stones++;
    }
    count += players[i];
  }

  return has_stones == 1 && count == num;
}

int32_t main()
{
  while(true){
    int32_t n, p;
    cin >> n >> p;
    if(n == 0) break;
    vector<int32_t> players(n, 0);

    int32_t in_pot = p;
    do{
      for(uint32_t i = 0; i < players.size(); i++){
        if(in_pot > 0){
          players[i]++;
          in_pot--;
        } else {
          in_pot += players[i];
          players[i] = 0;
        }
      }
    } while(!is_game_end(p, players));

    for(uint32_t i = 0; i < players.size(); i++){
      if(players[i] > 0){
        cout << i << endl;
      }
    }
  }

  return 0;
}