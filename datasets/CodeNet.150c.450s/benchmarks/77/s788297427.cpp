#include <cstdint>
#include <vector>
#include <iostream>

using namespace std;

int32_t main()
{
  while(true){
    uint32_t n;
    cin >> n;
    if(n == 0) break;

    vector<pair<uint32_t, uint32_t>> stones;
    vector<pair<uint32_t, uint32_t>> moved;

    pair<uint32_t, uint32_t> pos = {10, 10};
    moved.push_back(pos);

    for(uint32_t i = 0; i < n; i++){
      uint32_t x, y;
      cin >> x >> y;
      stones.push_back({x, y});
    }
    
    uint32_t commands;
    cin >> commands;
    for(uint32_t i = 0; i < commands; i++){
      char d;
      uint32_t dist;
      cin >> d >> dist;

      for(uint32_t i = 0; i < dist; i++){
        switch(d){
          case 'N':
            pos.second += 1;
            break;
          case 'S':
            pos.second -= 1;
            break;
          case 'W':
            pos.first -= 1;
            break;
          case 'E':
            pos.first += 1;
            break;
        }
        moved.push_back(pos);
      }
    }

    bool all_found = true;
    for(uint32_t i = 0; i < stones.size(); i++){
      bool found = false;
      for(uint32_t j = 0; j < moved.size(); j++){
        if(stones[i] == moved[j]){
          found = true;
        }
      }

      if(!found){
        all_found = false;
      }
    }
        
    if(all_found) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}