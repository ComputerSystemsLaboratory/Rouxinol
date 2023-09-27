#include <iostream>

using namespace std;

int main() {
  int array[101][101] = {0};
  int r, c;
  cin >> r >> c;
  for(int y=0; y < r; ++y){
    for(int x=0; x < c; ++x){
      cin >> array[y][x];
      array[100][x] += array[y][x];
      array[y][100] += array[y][x];
      array[100][100] += array[y][x];
    }
  }
  for(int y=0; y < r; ++y){
    for(int x=0; x < c; ++x){
      cout << array[y][x] << ' ';
    }
    cout << array[y][100] << endl;
  }
  for(int x=0; x < c; ++x){
    cout << array[100][x] << ' ';
  }
  cout << array[100][100] << endl;
  return 0;
}
