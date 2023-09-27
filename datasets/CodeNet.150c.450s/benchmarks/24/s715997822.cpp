#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

#if 0
このプログラムでは、襲われる期待値の高い区間から順に、予算の許す限り護衛を雇うようにすれば良い。
区間距離Dと襲われる期待値Pでペアとし、期待値Pが大きい順に並び変えを行う。
#endif

int N, M;
pair<int, int> PD[10000+5];

int main(){
  while (cin >> N >> M && N) {
    int d, p, S=0;
    for(int i=0; i < N;++i){
      cin >> d >> p;
      PD[i] = make_pair(p,d);
    }
    sort(PD, PD+N);
    // for(int i=0; i < N;++i) cout << "PD[" << i << "]= (" << PD[i].first << ", "  << PD[i].second << ")" << endl;

  for(int i=0; i<N; ++i) S += PD[i].first * PD[i].second;

  for (int i = N-1; i >= 0; --i) {
    if (M <= 0) break;
    int guarded = min(M,PD[i].second);
    S -= PD[i].first * guarded;
    M -= guarded;
  }

  cout << S << endl;
  }
}

