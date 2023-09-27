#include <iostream>
using namespace std;

int main(void){
  int number[4][3][10] = {0};
  int N;
  cin >> N;
  int b,f,r,v;
  for(int i = 0; i < N; i++ ){
    cin >> b >> f >> r >> v;
    number[b-1][f-1][r-1] += v;
  }
  for(int bb = 0; bb < 4; bb++ ){
    for(int ff = 0; ff < 3; ff++ ){
      for( int rr = 0; rr < 10; rr++ ){
        cout << " " << number[bb][ff][rr];
      }
      cout << endl;
    }
    if(bb != 3) cout << "####################" << endl;
  }


  return 0;
}