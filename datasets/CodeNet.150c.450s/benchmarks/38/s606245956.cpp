#include <iostream>
using namespace std;

int main()
{
  int n;
  int side[3];
  cin >> n;

  for (int i = 1; i <= n; i++){

    for (int j = 0; j <= 2; j++){
      cin >> side[j];
    }
    for (int j = 0; j < 2; j++){
      if (side[j] >= side[j + 1]){
        int s = side[j + 1];
        side[j + 1] = side[j];
        side[j] = s;
      }
    }
    if ((side[2] * side[2]) == ((side[0] * side[0]) + (side[1] * side[1]))){
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  
  return 0;
}