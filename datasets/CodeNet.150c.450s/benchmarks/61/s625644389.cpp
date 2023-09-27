#include <iostream>
#define FLAME_MAX 10000
#define REP(i, n) for(int i = 0; i < (n); i++)
#define linear(x, A, B, C) ((A) * (x) + (B)) % (C)
using namespace std;

int main()
{
  while(1){
    int N, A, B, C, X;
    cin >> N >> A >> B >> C >> X;
    if(N == 0 && A == 0 && B == 0 && C == 0 && X == 0){
      break;
    }else{
      int Y;
      int x = X;
      int f = 0;
      REP(i, N){
        cin >> Y;
        if(x != Y){
          while(x != Y && f <= FLAME_MAX){
            f++;
            x = linear(x, A, B, C);
          }
        }
        if(i > 0)
          f++;
        x = linear(x, A, B, C);
      }
      if(f <= FLAME_MAX)
        cout << f << endl;
      else
        cout << "-1" << endl;
    }
  }
}