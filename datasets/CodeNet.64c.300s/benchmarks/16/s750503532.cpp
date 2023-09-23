#include <iostream>
#include <algorithm>
using namespace std;
static const int Max = 1000000;
int main(){
  long long N,Rt[Max];
  cin >> N;
  for(int j = 0; j < N; j++){
    cin >> Rt[j];
  }
  long long Maxv = -2000000000;
  long long Minv = Rt[0];

  for(int j = 1; j < N; j++){
    Maxv = max(Maxv, Rt[j]-Minv);
    Minv = min(Minv, Rt[j]);
  }

  cout << Maxv << endl;
  return 0;
}
