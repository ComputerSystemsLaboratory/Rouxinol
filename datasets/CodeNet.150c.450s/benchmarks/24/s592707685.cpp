#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

long long n, m;
pair<long long,long long> pd[1001000];




# if 0
int expectation2(int probability[], int distance[]){
  int S = 0;
  for (int i=0; i<n; ++i){
    S += probability[i] * distance[i];
  }
  // 予算0 の時の答えが，現在のS の値
  for (int i=0; i<n; ++i){
    if (m <= 0) break;
    int guarded = min(m, distance[i]);//Mと道[i]の長さの小さい方; // 雇う区間
    S -= probability[i]* guarded;
    m -= guarded;
  }
  return S;
}
#endif

int main(){
  while(cin >> n >> m && n ){
    long long d, p;
    for(int i = 0; i < n; ++i){
      cin >> d >> p;
      pd[i] = make_pair(p, d);
      
      // pd[i].first は道i の危険度
      // pd[i].second は道i の長さ
      //cout << pd[i].first << " " << pd[i].second <<  endl;
    }
    sort(pd, pd+n);
    
    int goal = 0;
    for(int i = 0; i < n; ++i){ 
      //cout << pd[i].first << " " << pd[i].second <<  endl;// 整列がうまく行ったか，PD を表示してみよう
      goal += pd[i].first * pd[i].second;
    }
    
    for(int i = n-1; i >=0; --i){
      if (m <= 0) break;
      int guarded = min(m, pd[i].second);//Mと道[i]の長さの小さい方; // 雇う区間
      goal -= pd[i].first * guarded;
      m -= guarded;
    }
    
    cout << goal << endl;
  }
}
