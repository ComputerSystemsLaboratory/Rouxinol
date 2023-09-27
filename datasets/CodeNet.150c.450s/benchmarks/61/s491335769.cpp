#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int N, A, B, C, X;
  while(cin >> N >> A >> B >> C >> X, N||A||B||C||X){
    vector<int> Y(N);
    for(int i = 0; i < N; i++){
      cin >> Y[i];
    }
    int x = X, index = 0, frame = -1;
    for(int i = 0; i <= 10000; i++){
      if(x == Y[index])index++;
      if(index == N){
        frame = i;
        break;
      }
      x = (A * x + B) % C;
    }
    cout << frame << endl;
  }
}