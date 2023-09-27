#include <iostream>
#define REP(i, n) for(int (i) = 0; (i) < (n); (i)++)
using namespace std;

int main()
{
  int N, M, P;
  while(1){
    cin >> N >> M >> P;
    if(N == 0 && M == 0 && P == 0){
      break;
    }else{
      int x, y, sum;
      sum = 0, y = 0;
      REP(i, N){
        cin >> x;
        sum += x;
        if(i + 1 == M)
          y = x;
      }
      if(y)
        cout << sum * (100 - P) / y << endl;
      else
        cout << "0" << endl;
    }
  }
}