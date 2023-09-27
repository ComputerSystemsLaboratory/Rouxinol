#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int N;
  cin >> N;
  vector<string> U(N);
  for(int i = 0; i < N; i++){
    cin >> U[i];
  }
  int M;
  cin >> M;
  vector<string> T(M);
  for(int i = 0; i < M; i++){
    cin >> T[i];
  }
  int s = -1;
  for(int i = 0; i < M; i++){
    bool flag = false;
    for(int j = 0; j < N; j++){
      if(T[i] == U[j]){
        if(s == -1)cout << "Opened by " << T[i] << endl;
        else cout << "Closed by " << T[i] << endl;
        s *= -1;
        flag = true;
        break;
      }
    }
    if(!flag)cout << "Unknown " << T[i] << endl;
  }
}