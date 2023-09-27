#include <iostream>
#include <cstdint>
#include <vector>

using namespace std;

int32_t main()
{
  while(true){
    uint32_t n, r;
    cin >> n >> r;
    if(n == 0) break;

    vector<uint32_t> cards(51, 0);
    for(int32_t i = n-1, j = 1;  i >= 0; i--, j++){
      cards[i] = j;
    }

    for(uint32_t i = 0; i < r; i ++){
      uint32_t p, c;
      cin >> p >> c;
      vector<uint32_t> cs;
      for(uint32_t i = p - 1; i < p - 1 + c; i++){
        cs.push_back(cards[i]);
      }
      for(uint32_t i = 0; i < p - 1; i++){
        cs.push_back(cards[i]);
      }
      for(uint32_t i = p - 1 + c; i < n; i++){
        cs.push_back(cards[i]);
      }

      for(uint32_t i= 0; i < n; i++){
        // cout << cs[i] << " ";
        cards[i] = cs[i];
      }
      // cout << endl;
    }

    cout << cards[0] << endl;
  }
  return 0;
}