#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;
int i, N, M;
pair<int, int> PD[10010];

struct sort_first{
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.first < right.first;
    }
};
int main(){
  while (cin >> N >> M){
    if(N == 0 && M == 0){break;}
    int d = 0, p = 0;
    for (i = 0; i < 10010; ++i){
      PD[i] = make_pair(p,d);
    }
    for (i = 0; i < N; ++i){
      cin >> d >> p;
      PD[i] = make_pair(p,d);
    }
    sort(begin(PD), end(PD), sort_first());
    reverse(begin(PD), end(PD));
    // for (i = 0; i < N; ++i){
    //   cout << PD[i].first << endl; 
    // }
    int S = 0;
    for (i = 0; i < N; ++i){S += PD[i].first * PD[i].second;}
    for (i = 0; i < N; ++i){
      if(M <= 0){break;}
      int guarded = min(M, PD[i].second);
      S -= PD[i].first * guarded;
      M -= guarded;
    }
    cout << S << endl;
  }
}