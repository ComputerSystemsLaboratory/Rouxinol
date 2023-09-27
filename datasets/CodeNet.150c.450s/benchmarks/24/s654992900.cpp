#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
struct Section{
  int number;
  int dist;
  int expvOfraid;
};
vector<Section> vc;

bool comp(const Section& sec1, const Section& sec2){
  return sec2.expvOfraid < sec1.expvOfraid;
}

void debug(){
  for(int i = 0; i < N; i++){
    cout << "Num : " << vc[i].number << ", Dist : " << vc[i].dist << ", ExpvOfraid : " << vc[i].expvOfraid << endl;
  }
}

int main(void){
  int D, P;
  while(cin >> N >> M){
    if(N == 0 && M == 0) break;
    vc.clear();
    for(int i = 0; i < N; i++){
      cin >> D >> P;
      Section sec = {i, D, P};
      vc.push_back(sec);
    }
    sort(vc.begin(), vc.end(), comp);
    //debug();
    int ans = 0;
    for(int i = 0; i < N; i++){
      for(int j = 0; j < vc[i].dist; j++){
        if(M <= 0) ans += vc[i].expvOfraid;
        M--;
      }
    }

    cout << ans << endl;
  }
  return 0;
}