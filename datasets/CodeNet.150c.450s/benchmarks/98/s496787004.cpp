#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int n, m;
  while(cin >> n >> m, n || m){
    vector<int> s_t(n), s_h(m);
    for(int i = 0; i < n; i++){
      cin >> s_t[i];
    }
    for(int i = 0; i < m; i++){
      cin >> s_h[i];
    }
    sort(s_t.begin(), s_t.end());
    sort(s_h.begin(), s_h.end());
    int sum_t = accumulate(s_t.begin(), s_t.end(), 0);
    int sum_h = accumulate(s_h.begin(), s_h.end(), 0);
    
    int t = 0, h = 0, sum = INF;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(sum_t - s_t[i] + s_h[j] == sum_h - s_h[j] + s_t[i]){
          if(sum >= s_t[i] + s_h[j]){
            t = s_t[i];
            h = s_h[j];
            sum = s_t[i] + s_h[j];
          }
        }
      }
    }
    if(sum == INF)cout << "-1" << endl;
    else cout << t << " " << h << endl;
  }

}