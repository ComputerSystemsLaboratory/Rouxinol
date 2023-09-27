#include <iostream>
#include <algorithm>

using namespace std;

int day_count(int Y, int M, int D) {
  int res = 0;

  for (int y=1; y<=Y; y++) {
    for (int m=1; m<=10; m++) {
      int D_MAX = (m%2? 20 : 19);
      if (y%3 == 0) D_MAX = 20;

      for (int d=1; d<=D_MAX; d++) {
        if (y == Y && m == M && d == D) return res; 
        res++;
      }
    }
  }
  return -1;
}

int main()
{
  int N;
  cin >> N;

  for (int t=0; t<N; t++) {
    int Y, M, D;
    cin >> Y >> M >> D;

    cout << day_count(1000, 1, 1) - day_count(Y, M, D) << endl;
  }
}