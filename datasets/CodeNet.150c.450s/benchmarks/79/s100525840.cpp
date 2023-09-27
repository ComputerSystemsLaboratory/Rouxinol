#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
  int N, R, p, c;
  // ???????????????????????¨???????????????                                                                                         
  while(cin >> N >> R && N){
    // ?±±?????????                                                                                                         
    array<int, 50> A;
    for(int i=0; i<N; i++){
      A[i] = N - i;
    }
    // ?????£?????????                                                                                                       
    for(int i=0; i<R; i++){
      cin >> p >> c;
      if(p == 1) continue;
      rotate(begin(A), begin(A) + p - 1, begin(A) + p + c - 1);
    }
    cout << A[0] << endl;
  }
}