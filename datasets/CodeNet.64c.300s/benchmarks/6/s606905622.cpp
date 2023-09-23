#include <iostream>

using namespace std;

int main() {
  int n;
  int building[4][3][10] = {0};
  int b,f,r,v;
  cin >> n;
  for(int i=0; i < n; ++i){
    cin >> b >> f >> r >> v;
    building[b-1][f-1][r-1] += v;
  }
  for(int i=0; i < 4; ++i){
    if(i) cout << "####################" << endl;
    for(int j=0; j < 3; ++j){
      for(int k=0; k < 10; ++k){
        cout << ' ' << building[i][j][k];
      }
      cout << endl;
    }
  }
  return 0;
}
