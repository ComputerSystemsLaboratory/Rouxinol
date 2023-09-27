#include <iostream>
#include <string>
#include <utility>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <climits>
#include <set>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;
int h[1500];
int cumsum_h[1501];
int w[1500];
int cumsum_w[1501];
int main(){
  while(true){
    int N;
    int M;
    cin >> N >> M;
    if(N == 0 && M == 0){
      break;
    }
    for(int i = 0; i < N; i++){
      cin >> h[i];
    }
    for(int i = 0; i < M; i++){
      cin >> w[i];
    }

    cumsum_h[0] = 0;
    for(int i = 0; i < N; i++){
      cumsum_h[i + 1] = h[i] + cumsum_h[i];
    }
    cumsum_w[0] = 0;
    for(int i = 0; i < M; i++){
      cumsum_w[i + 1] = w[i] + cumsum_w[i];
    }

    map <int, int> h_count;
    for(int i = 0; i < N; i++){
      for(int j = i + 1; j < N + 1; j++){
        int cur_h = cumsum_h[j] - cumsum_h[i];
        if(h_count.find(cur_h) == h_count.end()){
          h_count[cur_h] = 1;
        } else {
          h_count[cur_h] ++;
        }
      }
    }

    long long ans = 0;
    for(int i = 0; i < M; i++){
      for(int j = i + 1; j < M + 1; j++){
        int cur_w = cumsum_w[j] - cumsum_w[i];
        if(h_count.find(cur_w) != h_count.end()){
          ans += (long long) h_count[cur_w];
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}

