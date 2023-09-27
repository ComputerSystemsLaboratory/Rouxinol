#include <iostream>
#include <cstdint>

using namespace std;

int32_t main()
{
  uint32_t n;
  cin >> n;

  uint64_t days_of_a_year = 5 * 20 + 5 * 19;
  uint64_t millenium = (1000 - 1) * days_of_a_year + (1000 - 1) / 3 * 5;

  for(uint32_t i = 0; i < n; i++){
    uint32_t Y, M, D;
    cin >> Y >> M >> D;
    uint64_t day = (Y - 1) * days_of_a_year + (Y - 1) / 3 * 5;
    if(Y % 3 == 0){
      day += (M - 1) * 20;
    } else {
      for(uint32_t j = 1; j < M; j++){
        if(j % 2 == 0) {
          day += 19;
        } else {
          day += 20;
        }
      }
    }
    day += D - 1;
    cout << millenium - day << endl;
  }

  return 0;
}