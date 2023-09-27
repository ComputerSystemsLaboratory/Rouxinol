#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int n;
  int days[1001][11][21] = {0};
  int s = 1;
  for(int i = 1; i <= 1000; i++){
    for(int j = 1; j <= 10; j++){
      for(int k = 1; k <= 20; k++){
        if(i % 3 != 0 && j % 2 == 0 && k == 20)continue;
        else {
          days[i][j][k] = s;
          s++;
        }
      }
    }
  }
  cin >> n;
  vector<int> Y(n), M(n), D(n);
  for(int i = 0; i < n; i++){
    cin >> Y[i] >> M[i] >> D[i];
    cout << days[1000][1][1] - days[Y[i]][M[i]][D[i]] << endl;;
  }
}