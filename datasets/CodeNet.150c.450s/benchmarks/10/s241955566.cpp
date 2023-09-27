#include<iostream>
using namespace std;

int main(){
  int n, b, f, r, v, rooms[5][4][11];

  for(int i = 1; i < 5; i++){
    for(int j = 1; j < 4; j++){
      for(int k = 1; k < 11; k++){
        rooms[i][j][k] = 0;
      }
    }
  }

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> b >> f >> r >> v;
    rooms[b][f][r] += v;
  }

  for(int i = 1; i < 5; i++){
    if(i != 1){
      for(int l = 0; l < 20; l++){
        cout << '#';
      }
      cout << endl;
    }
    for(int j = 1; j < 4; j++){
      for(int k = 1; k < 11; k++){
        cout << ' ' << rooms[i][j][k];
      }
      cout << endl;
    }
  }
  return 0;
}