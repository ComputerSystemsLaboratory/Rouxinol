#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  int n, b, f, r, v;
  cin >> n;
  int room[12][10];
  for(int i=0;i<12;i++){
    for(int j=0;j<10;j++){
      room[i][j] = 0;
    }
  }

  for(int i=0;i<n;i++){
    cin >> b >> f >> r >> v;
    room[(b-1)*3+(f-1)][r-1] += v;
  }

  for(int i=0;i<12;i++){
    if(i%3==0 && i!=0){
      cout << "####################" << endl;
    }
    for(int j=0;j<10;j++){
      cout << " " << room[i][j];
    }
    cout << endl;
  }

  return 0;
}