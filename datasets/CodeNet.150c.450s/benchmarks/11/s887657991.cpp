#include <iostream>

using namespace std;

int main()
{
  bool card[4][14] = {false};
  int n;
  char c;
  int rank;
  
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> c >> rank;
    switch (c){
      case 'S':
        card[0][rank] = true;
        break;
      case 'H':
        card[1][rank] = true;
        break;
      case 'C':
        card[2][rank] = true;
        break;
      case 'D':
        card[3][rank] = true;
        break;
    }
  }
  
  for (int i = 0; i < 4; i++){
    for (int j = 1; j <= 13; j++){
      if (card[i][j] == false){
        switch (i){
          case 0:
            cout << "S " << j << endl;
            break;
          case 1:
            cout << "H " << j << endl;
            break;
          case 2:
            cout << "C " << j << endl;
            break;
          case 3:
            cout << "D " << j << endl;
            break;
        }
      }
    }
  }

  return (0);
}